// Fill out your copyright notice in the Description page of Project Settings.

#include "VRPlayer.h"
#include "MLFileManager.h"
#include "FileManager.h"



TArray<FString> UMLFileManager::GetAllFileNameInDirectory(const FString Directory, const FString Extension)
{
	// Get all files in directory
	TArray<FString> directoriesToSkip;
	IPlatformFile &PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FLocalTimestampDirectoryVisitor Visitor(PlatformFile, directoriesToSkip, directoriesToSkip, false);
	PlatformFile.IterateDirectory(*Directory, Visitor);

	TArray<FString> files;

	for (TMap<FString, FDateTime>::TIterator TimestampIt(Visitor.FileTimes); TimestampIt; ++TimestampIt)
	{
		const FString filePath = TimestampIt.Key();
		const FString fileName = FPaths::GetCleanFilename(filePath);
		bool shouldAddFile = true;

		// 		// Check if filename starts with required characters
		// 		if (!OnlyFilesStartingWith.IsEmpty())
		// 		{
		// 			const FString left = fileName.Left(OnlyFilesStartingWith.Len());
		// 
		// 			if (!(fileName.Left(OnlyFilesStartingWith.Len()).Equals(OnlyFilesStartingWith)))
		// 				shouldAddFile = false;
		// 		}

		// Check if file extension is required characters
		if (!Extension.IsEmpty())
		{
			if (!(FPaths::GetExtension(fileName, false).Equals(Extension, ESearchCase::IgnoreCase)))
				shouldAddFile = false;
		}

		// Add full path to results
		if (shouldAddFile)
		{
			files.Add(fileName);
		}
	}

	return files;
}

bool UMLFileManager::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}