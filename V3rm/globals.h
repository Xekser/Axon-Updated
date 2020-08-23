#pragma once
#define x(x) (x - 0x400000 + (DWORD)GetModuleHandleA(0))
#define seti(rL) *(DWORD*)(*(DWORD*)(rL + 104) + 24) = 6;

#define R_LUA_TNIL 0
#define R_LUA_TLIGHTUSERDATA 4
#define R_LUA_TNUMBER 2
#define R_LUA_TBOOLEAN 1
#define R_LUA_TSTRING 5
#define R_LUA_TTHREAD 9
#define R_LUA_TFUNCTION 7
#define R_LUA_TTABLE 8
#define R_LUA_TUSERDATA 6
/*
[Xeksploit Types Dumper] > NIL: 0
[Xeksploit Types Dumper] > NUMBER: 2
[Xeksploit Types Dumper] > BOOLEAN: 1
[Xeksploit Types Dumper] > LIGHTUSERDATA: 4
[Xeksploit Types Dumper] > STRING: 5
[Xeksploit Types Dumper] > TABLE: 8
[Xeksploit Types Dumper] > USERDATA: 6
[Xeksploit Types Dumper] > THREAD: 9
[Xeksploit Types Dumper] > Warning: May Crash
[Xeksploit Types Dumper] > FUNCTION: 7*/