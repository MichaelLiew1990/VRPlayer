#include "iTweenPCH.h"
#include "iTweenModule.h"

IMPLEMENT_MODULE(iTweenModule, iTween);

DEFINE_LOG_CATEGORY(ModuleLog)

#define LOCTEXT_NAMESPACE "iTween"

iTweenModule::iTweenModule()
{

}

void iTweenModule::StartupModule()
{
	//Startup LOG message
	UE_LOG(ModuleLog, Warning, TEXT("iTween: Log Started"));
}

void iTweenModule::ShutdownModule()
{
	//Shutdown LOG message
	UE_LOG(ModuleLog, Warning, TEXT("iTween: Log Ended"));
}