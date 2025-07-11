#pragma once
#include "Memory.h"
#include "Vector.h"
#include "SDKClasses.h"
class EngineClient
{
public:
	void GetScreenSize(int& width, int& height)
	{
		typedef void(__thiscall* OriginalFn)(PVOID, int&, int&);
		return Memory::CallVirtual<OriginalFn>(this, 5)(this, width, height);
	}
	bool GetPlayerInfo(int ent_num, player_info_t* pinfo)
	{
		typedef bool(__thiscall* OriginalFn)(PVOID, int, player_info_t*);
		return Memory::CallVirtual<OriginalFn>(this, 8)(this, ent_num, pinfo);
	}
	bool Con_IsVisible(void)
	{
		typedef bool(__thiscall* OriginalFn)(PVOID);
		return Memory::CallVirtual<OriginalFn>(this, 11)(this);
	}
	int GetLocalPlayer(void)
	{
		typedef int(__thiscall* OriginalFn)(PVOID);
		return Memory::CallVirtual<OriginalFn>(this, 12)(this);
	}
	float Time(void)
	{
		typedef float(__thiscall* OriginalFn)(PVOID);
		return Memory::CallVirtual<OriginalFn>(this, 14)(this);
	}
	void GetViewAngles(Vector& va)
	{
		typedef void(__thiscall* OriginalFn)(PVOID, Vector& va);
		return Memory::CallVirtual<OriginalFn>(this, 19)(this, va);
	}
	void SetViewAngles(Vector& va)
	{
		typedef void(__thiscall* OriginalFn)(PVOID, Vector& va);
		return Memory::CallVirtual<OriginalFn>(this, 20)(this, va);
	}
	int GetMaxClients(void)
	{
		typedef int(__thiscall* OriginalFn)(PVOID);
		return Memory::CallVirtual<OriginalFn>(this, 21)(this);
	}
	bool IsInGame(void)
	{
		typedef bool(__thiscall* OriginalFn)(PVOID);
		return Memory::CallVirtual<OriginalFn>(this, 26)(this);
	}
	bool IsConnected(void)
	{
		typedef bool(__thiscall* OriginalFn)(PVOID);
		return Memory::CallVirtual<OriginalFn>(this, 27)(this);
	}
	bool IsDrawingLoadingImage(void)
	{
		typedef bool(__thiscall* OriginalFn)(PVOID);
		return Memory::CallVirtual<OriginalFn>(this, 28)(this);
	}
	const matrix3x4& WorldToScreenMatrix(void)
	{
		typedef const matrix3x4& (__thiscall* OriginalFn)(PVOID);
		return Memory::CallVirtual<OriginalFn>(this, 36)(this);
	}
	bool IsTakingScreenshot(void)
	{
		typedef bool(__thiscall* OriginalFn)(PVOID);
		return Memory::CallVirtual<OriginalFn>(this, 85)(this);
	}
	DWORD* GetNetChannelInfo(void)
	{
		typedef DWORD* (__thiscall* OriginalFn)(PVOID);
		return Memory::CallVirtual<OriginalFn>(this, 72)(this);
	}
	void ClientCmd_Unrestricted(const char* chCommandString)
	{
		typedef void(__thiscall* OriginalFn)(PVOID, const char*);
		return Memory::CallVirtual<OriginalFn>(this, 106)(this, chCommandString);
	}
	void FireEvents()
	{
		typedef void(__thiscall* FireEvent_FN)(void*);
		Memory::CallVirtual<FireEvent_FN>(this, 56)(this);
	}
	void ServerCmdKeyValues(PVOID kv)
	{
		typedef void(__thiscall* OriginalFn)(PVOID, PVOID);
		Memory::CallVirtual<OriginalFn>(this, 127)(this, kv);
	}
};
