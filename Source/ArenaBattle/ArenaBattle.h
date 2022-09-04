// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//CoreMinimal.h를 EngineMinimal.h로 변경
#include "EngineMinimal.h"
//.h 파일에 Log카테고리를 선언해준다.
DECLARE_LOG_CATEGORY_EXTERN(ArenaBattle, Log, All);

#define ABLOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__)+ TEXT(")"))
#define ABLOG_S(Verbosity) UE_LOG(ArenaBattle, Verbosity, TEXT("%s"), *ABLOG_CALLINFO)
#define ABLOG(Verbosity, Format, ...) UE_LOG(ArenaBattle, Verbosity, TEXT("%s%s"), *ABLOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))

#define ABCHECK(Expr, ...){if(!(Expr)){ABLOG(Error, TEXT("ASSERTION : %s"), TEXT("'"#Expr"'"));return __VA_ARGS__;}}