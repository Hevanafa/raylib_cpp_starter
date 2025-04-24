#include "raylib.h"

#pragma once
class Program
{
public:
	Program();
private:
	const int WindowWidth = 640;
	const int WindowHeight = 400;
	const Color CornflowerBlue = { 0x64, 0x95, 0xed, 0xff };
	Texture2D raylib;

	void update();
	void draw();
	// Your code here
};

