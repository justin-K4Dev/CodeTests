// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 및 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once

#define OUT

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

// TODO: 프로그램에 필요한 추가 헤더는 여기에서 참조합니다.

#include <assert.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <unordered_map>
#include <shared_mutex>
#include <csetjmp>

#include <Windows.h>
#include <Psapi.h> 

// for lua header file
#ifdef __cplusplus
extern "C" {
#endif//__cplusplus

	//#include <luaconf.h>
	#include <lua.h>
	#include <lualib.h>
	#include <lauxlib.h>

#ifdef __cplusplus
}
#endif//__cplusplus

#include "Debug.h"



