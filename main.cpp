#include "raylib.h"

int main()
{
    const int screenWidth{1280};
    const int screenHeight{800};

    const int ballRadius{20};

    const int rectangleWidth{25};
    const int rectangleHeight{120};

    InitWindow(screenWidth, screenHeight, "My Pong Game!");

    SetTargetFPS(60);

    while (!(WindowShouldClose()))
    {
        BeginDrawing();

        DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, WHITE);

        DrawCircle(screenWidth / 2, screenHeight / 2, ballRadius, WHITE);

        DrawRectangle(10, screenHeight / 2 - rectangleHeight / 2,
                      rectangleWidth, rectangleHeight, WHITE);
        DrawRectangle(screenWidth - rectangleWidth - 10,
                      screenHeight / 2 - rectangleHeight / 2, rectangleWidth,
                      rectangleHeight, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
