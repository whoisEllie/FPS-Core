// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IAssetTools.h"
#include "IAssetTypeActions.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;

class FFPSCoreEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command. */
	void PluginButtonClicked();
	
private:
	void RegisterAssetTypeActions(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Actions)
	{
		AssetTools.RegisterAssetTypeActions(Actions);
		CreatedAssetTypeActions.Add(Actions);
	}
	
	void RegisterMenus();

	TSharedPtr<class FSlateStyleSet> StyleSet;

	TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;

private:
	TSharedPtr<class FUICommandList> PluginCommands;
};
