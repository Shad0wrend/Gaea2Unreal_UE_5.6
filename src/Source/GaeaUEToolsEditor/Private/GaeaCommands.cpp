// Fill out your copyright notice in the Description page of Project Settings.


#include "GaeaCommands.h"
#include "InputCoreTypes.h"

#define LOCTEXT_NAMESPACE "FGaea"

void FGaeaCommands::RegisterCommands()
{
	UI_COMMAND(OpenImporter, "Open Importer", "Opens the Landscape Importer Window", EUserInterfaceActionType::Button, FInputChord(EKeys::P, EModifierKey::Control | EModifierKey::Alt));
}


#undef LOCTEXT_NAMESPACE