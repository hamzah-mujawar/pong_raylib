class Paddle
{
public:
    // constructor
    Paddle(float x, float y, float width, float height, int speed);

    Paddle(const Paddle&) = delete;
    Paddle& operator=(const Paddle&) = delete;
    Paddle(Paddle&&) = delete;
    Paddle& operator=(Paddle&&) = delete;

    // setters
    void setX(float x);
    void setY(float y);
    void setWidth(float width);
    void setHeight(float height);
    void setSpeed(int speed);

    // getters
    float getX() const { return m_x; }
    float getY() const { return m_y; }
    float getWidth() const { return m_width; }
    float getHeight() const { return m_height; }
    float getSpeed() const { return m_speed; }

    void Draw();
    void Update();
    void UpdateCpu(int ballY);
    void BoundMovement();

private:
    float m_x{};
    float m_y{};
    float m_width{};
    float m_height{};
    int m_speed{};
};
