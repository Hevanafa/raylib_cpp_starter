#include <iostream>
#include "raylib.h"
#include "Program.h"

Program::Program() {
    InitWindow(WindowWidth, WindowHeight, "Raylib C++ Starter");

    Image temp = LoadImage("assets/images/raylib.png");
    raylib = LoadTextureFromImage(temp);
    UnloadImage(temp);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        Program::update();
        Program::draw();
    }

    CloseWindow();
}

void Program::update() {
	// TODO: Your game logic here
}

void Program::draw() {
    std::string s("Hello world!");

	// TODO: Your draw code here
    BeginDrawing();
    ClearBackground(CornflowerBlue);
    DrawTexture(raylib, WindowWidth / 2 - 128, 40, RAYWHITE);
    DrawText(s.c_str(), (WindowWidth - MeasureText(s.c_str(), 20)) / 2, WindowHeight - 80, 20, RAYWHITE);
    EndDrawing();
}