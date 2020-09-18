// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ExSaveGameData.h"
#include "ExAutoSaveBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UExAutoSaveBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ExAutoSave", Keywords = "Auto Save GameInfo"), Category = "ExAutoSave")
		static void ExAutoSave(int setTimer, bool isDelaySave, FString gameSaveSlot, int gameSaveIndex, TArray<AActor*> gActor , TArray<FString> gString, TArray<FText> gText, TArray<FVector> gVector, TArray<FVector4> gVector4, TArray<FVector2D> gVector2, TArray<FRotator> gRotator, TArray<float> gFloat, TArray<int> gInt, TArray<bool> gBool, TArray<FTransform> gTransform, FExStructTemp ExStructArr, FExTypeStruct ExStructType, TArray<FExTypeStruct> ExStructTypeArr, TArray<UObject*> ExStructObjArr, TArray<UGameInstance*> ExGameInstance, TArray<AGameModeBase*> ExGameMode, TArray<AGameStateBase*> ExGameState, TArray<UObject*> ExLevelData, bool&isSaved);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ExAutoLoad", Keywords = "Auto Load GameInfo"), Category = "ExAutoSave")
		static void ExAutoLoad(FString SlotName, int gameSaveIndex, TArray<AActor*>& gActor, TArray<FString>& gString, TArray<FText>& gText, TArray<FVector>& gVector, TArray<FVector4>& gVector4, TArray<FVector2D>& gVector2, TArray<FRotator>& gRotator, TArray<float>& gFloat, TArray<int>& gInt, TArray<bool>& gBool, TArray<FTransform>& gTransform, FExStructTemp& ExStructArr, FExTypeStruct& ExStructType, TArray<FExTypeStruct>& ExStructTypeArr, TArray<UObject*>& ExStructObjArr, TArray<UGameInstance*>& ExGameInstance, TArray<AGameModeBase*>& ExGameMode, TArray<AGameStateBase*>& ExGameState, TArray<UObject*>& ExLevelData);
};
