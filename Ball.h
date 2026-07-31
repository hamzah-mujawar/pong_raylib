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
    void setScore(int score);
    void setCpuScore(int score);

    // getters
    float getX() const { return m_x; }
    float getY() const { return m_y; }
    int getSpeedX() const { return m_speedX; }
    int getSpeedY() const { return m_speedY; }
    int getRadius() const { return m_radius; }
    int getScore() const { return m_score; }
    int getCpuScore() const { return m_cpu_score; }

    void Draw();
    void Update();
    void ResetBall();

private:
    float m_x{};
    float m_y{};
    int m_speedX{};
    int m_speedY{};
    int m_radius{};
    int m_score{};
    int m_cpu_score{};
};
