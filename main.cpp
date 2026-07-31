#include "raylib.h"

int main()
{
    const int screenWidth{1280};
    const int screenHeight{800};

    InitWindow(screenWidth, screenHeight, "My Pong Game!");

    SetTargetFPS(60);

    while (!(WindowShouldClose()))
    {
        BeginDrawing();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
