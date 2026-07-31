#include "Paddle.h"
#include "raylib.h"

// constructor
Paddle::Paddle(float x, float y, float width, float height, int speed)
    : m_x{x}, m_y{y}, m_width{width}, m_height{height}, m_speed{speed}
{
}

// setters
void setX(float x);
void setY(float y);
void setWidth(float width);
void setHeight(float height);
void setSpeed(int speed);

void Paddle::Draw() { DrawRectangle(m_x, m_y, m_width, m_height, WHITE); }

void Paddle::Update()
{
    if (IsKeyDown(KEY_UP))
    {
        m_y = m_y - m_speed;
    }
    if (IsKeyDown(KEY_DOWN))
    {
        m_y = m_y + m_speed;
    }

    if (m_y <= 0)
    {
        m_y = 0;
    }
    if (m_y + m_height >= GetScreenHeight())
    {
        m_y = GetScreenHeight() - m_height;
    }
}
