// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ExAutoSaveBPLibrary.h"
#include "ExSaveGameData.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/SaveGame.h"
#include "Misc/DateTime.h"
#include "ExAutoSave.h"

UExAutoSaveBPLibrary::UExAutoSaveBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UExAutoSaveBPLibrary::ExAutoSave(int setTimer, bool isDelaySave, FString gameSaveSlot, int gameSaveIndex,  TArray<AActor*> gActor, TArray<FString> gString, TArray<FText> gText, TArray<FVector> gVector, TArray<FVector4> gVector4, TArray<FVector2D> gVector2, TArray<FRotator> gRotator, TArray<float> gFloat, TArray<int> gInt, TArray<bool> gBool, TArray<FTransform> gTransform, FExStructTemp ExStructArr, FExTypeStruct ExStructType, TArray<FExTypeStruct> ExStructTypeArr, bool& isSaved)
{
	UExSaveGameData* creatSaveObject = Cast<UExSaveGameData>(UGameplayStatics::CreateSaveGameObject(UExSaveGameData::StaticClass()));

	creatSaveObject->gActor = gActor;
	creatSaveObject->gString = gString;
	creatSaveObject->gText = gText;
	creatSaveObject->gVector = gVector;
	creatSaveObject->gVector4 = gVector4;
	creatSaveObject->gVector2 = gVector2;
	creatSaveObject->gRotator = gRotator;
	creatSaveObject->gFloat = gFloat;
	creatSaveObject->gInt = gInt;
	creatSaveObject->gBool = gBool;
	creatSaveObject->gTransform = gTransform;
	creatSaveObject->ExStructArr = ExStructArr;
	creatSaveObject->ExStructType = ExStructType;
	creatSaveObject->ExStructTypeArr = ExStructTypeArr;

	if (isDelaySave)
	{
		FPlatformProcess::Sleep(setTimer);
		UGameplayStatics::SaveGameToSlot(creatSaveObject, gameSaveSlot, gameSaveIndex);
	}
	else
	{
		UGameplayStatics::SaveGameToSlot(creatSaveObject, gameSaveSlot, gameSaveIndex);
	}

}

void UExAutoSaveBPLibrary::ExAutoLoad(FString SlotName, int gameSaveIndex, TArray<AActor*>& gActor, TArray<FString>& gString, TArray<FText>& gText, TArray<FVector>& gVector, TArray<FVector4>& gVector4, TArray<FVector2D>& gVector2, TArray<FRotator>& gRotator, TArray<float>& gFloat, TArray<int>& gInt, TArray<bool>& gBool, TArray<FTransform>& gTransform, FExStructTemp& ExStructArr, FExTypeStruct& ExStructType, TArray<FExTypeStruct>& ExStructTypeArr)
{

	UExSaveGameData* loadSaveObject = Cast<UExSaveGameData>(UGameplayStatics::CreateSaveGameObject(UExSaveGameData::StaticClass()));

	loadSaveObject = Cast<UExSaveGameData>( UGameplayStatics::LoadGameFromSlot(SlotName, gameSaveIndex) );

	gActor = loadSaveObject->gActor;
	gString = loadSaveObject->gString;
	gText = loadSaveObject->gText;
	gVector = loadSaveObject->gVector;
	gVector4 = loadSaveObject->gVector4;
	gVector2 = loadSaveObject->gVector2;
	gRotator = loadSaveObject->gRotator;
	gFloat = loadSaveObject->gFloat;
	gInt = loadSaveObject->gInt;
	gBool = loadSaveObject->gBool;
	gTransform = loadSaveObject->gTransform;
	ExStructArr = loadSaveObject->ExStructArr;
	ExStructType = loadSaveObject->ExStructType;
	ExStructTypeArr = loadSaveObject->ExStructTypeArr;

}
