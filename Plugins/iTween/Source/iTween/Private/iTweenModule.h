#pragma once

DECLARE_LOG_CATEGORY_EXTERN(ModuleLog, Log, All);

class iTweenModule : public IModuleInterface
{
private:

public:
	iTweenModule();

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};