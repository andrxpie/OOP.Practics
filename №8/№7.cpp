#include <iostream>
#include <cstdint>

class RGBA
{
    uint8_t m_red,
        m_green,
        m_blue,
        m_alpha;

public:
    RGBA(uint8_t red = 0, uint8_t green = 0, uint8_t blue = 0, uint8_t alpha = 255)
        : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) 
    {
    }

    void print() 
    {
        std::cout << "r=" << +m_red << " g=" << +m_green << " b=" << +m_blue << " a=" << +m_alpha << "\n";
    }
};

int main()
{
    RGBA color(0, 135, 135);
    color.print();
}