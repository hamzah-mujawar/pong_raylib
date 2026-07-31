class Ball
{
public:
    // constructor
    explicit Ball(float x, float y, int radius, int speedX, int speedY);

    Ball(const Ball&) = delete;
    Ball& operator=(const Ball&) = delete;
    Ball(Ball&&) = delete;
    Ball& operator=(Ball&&) = delete;

    // setters
    void setX(float x);
    void setY(float y);
    void setSpeedX(int speedX);
    void setSpeedY(int speedY);
    void setRadius(int radius);

    // getters
    float getX() const { return m_x; }
    float getY() const { return m_y; }
    int getSpeedX() const { return m_speedX; }
    int getSpeedY() const { return m_speedY; }
    int getRadius() const { return m_radius; }

    void Draw();
    void Update();

private:
    float m_x{};
    float m_y{};
    int m_speedX{};
    int m_speedY{};
    int m_radius{};
};
