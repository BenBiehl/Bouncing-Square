#include "pch.h"
#include "BouncingSquare.h"

BAKKESMOD_PLUGIN(BouncingSquare, "Bouncing Square Plugin", "1.0", PERMISSION_ALL)

void BouncingSquare::onLoad()
{
	Log("BouncingSquare Plugin Sucessfully Loaded");
	gameWrapper->RegisterDrawable(std::bind(&BouncingSquare::Render, this, std::placeholders::_1));
}

void BouncingSquare::Render(CanvasWrapper canvas)
{
	canvas.SetColor(255, 255, 255, 255);
	canvas.SetPosition((Vector2{ 0, 0 }));
	canvas.FillBox((Vector2{ 100, 100 }));
}

void BouncingSquare::Log(std::string msg)
{
	cvarManager->log(msg);
}

void BouncingSquare::onUnload()
{

}
