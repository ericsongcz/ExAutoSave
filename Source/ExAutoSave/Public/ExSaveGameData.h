// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ExStruct.h"
#include "ExSaveGameData.generated.h"

/**
 * 
 */
UCLASS()
class EXAUTOSAVE_API UExSaveGameData : public USaveGame
{
	GENERATED_BODY()
	

public:

// array group
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<AActor*> gActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<FString> gString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<FText> gText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<FVector> gVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<FVector4> gVector4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<FVector2D> gVector2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<FRotator> gRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<float> gFloat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<int> gInt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<bool> gBool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<FTransform> gTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	FExStructTemp ExStructArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	FExTypeStruct ExStructType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<FExTypeStruct> ExStructTypeArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<UObject*> ExStructObjArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<UGameInstance*> ExGameInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<AGameModeBase*> ExGameMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<AGameStateBase*> ExGameState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData")
	TArray<UObject*> ExLevelData;
};
