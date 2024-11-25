#pragma once
#include "bakkesmod/plugin/bakkesmodplugin.h"
#pragma comment ( lib, "pluginsdk.lib" )

class BouncingSquare : public BakkesMod::Plugin::BakkesModPlugin
{
public:
	virtual void onLoad();
	virtual void onUnload();

private:
	void Log(std::string msg);
	void Render(CanvasWrapper canvas);
};

