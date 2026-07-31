#include "Ball.h"
#include "raylib.h"

// constructor
Ball::Ball(float x, float y, int radius, int speedX, int speedY)
    : m_x{x}, m_y{y}, m_radius{radius}, m_speedX{speedX}, m_speedY{speedY}
{
}

// setters
void Ball::setX(float x) { m_x = x; }
void Ball::setY(float y) { m_y = y; }
void Ball::setSpeedX(int speedX) { m_speedX = speedX; }
void Ball::setSpeedY(int speedY) { m_speedY = speedY; }
void Ball::setRadius(int radius) { m_radius = radius; }
void Ball::setScore(int score) { m_score = score; }
void Ball::setCpuScore(int score) { m_cpu_score = score; }

void Ball::Draw() { DrawCircle(m_x, m_y, m_radius, WHITE); }

void Ball::Update()
{
    m_x += m_speedX;
    m_y += m_speedY;

    if (m_y + m_radius >= GetScreenHeight() || m_y - m_radius <= 0)
    {
        m_speedY *= -1;
    }

    if (m_x + m_radius >= GetScreenWidth() || m_x - m_radius <= 0)
    {
        m_speedX *= -1;
    }

    if (m_x + m_radius >= GetScreenWidth())
    {
        m_cpu_score++;
        ResetBall();
    }
    if (m_x - m_radius <= 0)
    {
        m_score++;
        ResetBall();
    }
}

void Ball::ResetBall()
{
    m_x = GetScreenWidth() / 2;
    m_y = GetScreenHeight() / 2;

    int speedChoices[2]{-1, 1};
    m_speedX *= speedChoices[GetRandomValue(0, 1)];
    m_speedY *= speedChoices[GetRandomValue(0, 1)];
}
