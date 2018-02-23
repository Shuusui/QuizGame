// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "QuizGameGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class QUIZGAME_API AQuizGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public: 


	UPROPERTY(BlueprintReadWrite)
		int m_WrongAnswerCount = 0;
	
};
