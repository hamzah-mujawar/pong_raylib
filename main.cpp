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

    Paddle cpu{screenWidth - rectangleWidth - 10,
               screenHeight / 2 - rectangleHeight / 2, rectangleWidth,
               rectangleHeight, 6};

    InitWindow(screenWidth, screenHeight, "My Pong Game!");

    SetTargetFPS(60);

    while (!(WindowShouldClose()))
    {
        BeginDrawing();

        ball.Update();
        player.Update();
        cpu.UpdateCpu(ball.getY());

        if (CheckCollisionCircleRec(
                Vector2{ball.getX(), ball.getY()}, ball.getRadius(),
                Rectangle{player.getX(), player.getY(), player.getWidth(),
                          player.getHeight()}))
        {
            ball.setSpeedX(ball.getSpeedX() * -1);
        }

        if (CheckCollisionCircleRec(Vector2{ball.getX(), ball.getY()},
                                    ball.getRadius(),
                                    Rectangle{cpu.getX(), cpu.getY(),
                                              cpu.getWidth(), cpu.getHeight()}))
        {
            ball.setSpeedX(ball.getSpeedX() * -1);
        }

        ClearBackground(BLACK);

        DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, WHITE);

        ball.Draw();

        player.Draw();

        cpu.Draw();

        DrawText(TextFormat("%i", ball.getCpuScore()), screenWidth / 4 - 20, 20,
                 80, WHITE);
        DrawText(TextFormat("%i", ball.getScore()), 3 * screenWidth / 4 - 20,
                 20, 80, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
