#include "Ball.h"
#include "Paddle.h"
#include "raylib.h"

int main()
{
    const int screenWidth{1280};
    const int screenHeight{800};

    const int rectangleWidth{25};
    const int rectangleHeight{120};

    Ball ball{screenWidth / 2, screenHeight / 2, 20, 7, 7};
    Paddle player{10, screenHeight / 2 - rectangleHeight / 2, rectangleWidth,
                  rectangleHeight, 6};

    InitWindow(screenWidth, screenHeight, "My Pong Game!");

    SetTargetFPS(60);

    while (!(WindowShouldClose()))
    {
        BeginDrawing();

        ball.Update();
        player.Update();

        ClearBackground(BLACK);

        DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, WHITE);

        ball.Draw();

        player.Draw();

        DrawRectangle(screenWidth - rectangleWidth - 10,
                      screenHeight / 2 - rectangleHeight / 2, rectangleWidth,
                      rectangleHeight, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
