#pragma once
#define CHEATNAME "Exxtions For Team Fortress 2"
typedef struct CScreenSize_t
{
	int iScreenHeight;
	int iScreenWidth;

} CScreenSize;

void __fastcall Hooked_PaintTraverse(PVOID pPanels, int edx, unsigned int vguiPanel, bool forceRepaint, bool allowForce);
void Intro();

extern CScreenSize gScreenSize;
