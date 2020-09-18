// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "Engine/Texture2D.h"
#include "Sound/SoundCue.h"
#include "ExStruct.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FExStructTemp
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<AActor*> structActorArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<FString> structStringArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<FText> structTextArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<FVector> structVectorArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<FVector4> structVector4Arr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<FVector2D> structVector2Arr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<FRotator> structRotatorArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<float> structFloatArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<int> structIntArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<bool> structBoolArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<FTransform> structTransformArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<USkeletalMeshComponent*> structSkeletalMeshArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<UStaticMeshComponent*> structMeshArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<UTexture2D*> structTextureArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<USoundBase*> structSoundArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct|Array")
		TArray<UObject*> structObjArr;

};

USTRUCT(BlueprintType)
struct FExTypeStruct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		AActor* structActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		FString structString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		FText structText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		FVector structVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		FVector4 structVector4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		FVector2D structVector2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		FRotator structRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		float structFloat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		int structInt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		bool structBool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		FTransform structTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		USkeletalMeshComponent* structSkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		UStaticMeshComponent* structMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		UTexture2D* structTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		USoundBase* structSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExArraySaveData|ExStruct")
		UObject* structObj;
};

UCLASS()
class EXAUTOSAVE_API UExStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
};
