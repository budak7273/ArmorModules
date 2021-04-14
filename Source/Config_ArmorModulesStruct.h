#pragma once
#include "CoreMinimal.h"
#include "Configuration/ConfigManager.h"
#include "Engine/Engine.h"
#include "Config_ArmorModulesStruct.generated.h"

/* Struct generated from Mod Configuration Asset '/ArmorModules/Config_ArmorModules' */
USTRUCT(BlueprintType)
struct FConfig_ArmorModulesStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 DemoInt;

    /* Retrieves active configuration value and returns object of this struct containing it */
    static FConfig_ArmorModulesStruct GetActiveConfig() {
        FConfig_ArmorModulesStruct ConfigStruct{};
        FConfigId ConfigId{"ArmorModules", ""};
        UConfigManager* ConfigManager = GEngine->GetEngineSubsystem<UConfigManager>();
        ConfigManager->FillConfigurationStruct(ConfigId, FDynamicStructInfo{FConfig_ArmorModulesStruct::StaticStruct(), &ConfigStruct});
        return ConfigStruct;
    }
};

