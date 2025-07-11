#pragma once
#include "SDK.h"
#include <Windows.h>
#include "singleton.h"
#include "GUI.h"
/*
class CMenu
{
public:
	bool IsOn;
	void RenderSelectedPlayerInfo();
	void Initialize();
};

inline CMenu gMenu;
*/

class Menu : public Singleton<Menu>
{
	bool m_isVisible = false;
	CForm MenuForm;
	CForm PlayerForm;
public:
	void Init();
	void Kill();

	void PaintTraverse();
	void Click();
	void HandleInput(WPARAM vk);

	void Toggle();

	bool IsVisible() const { return m_isVisible; }
};