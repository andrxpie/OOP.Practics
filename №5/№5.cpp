#include <iostream>

class Ball {
    std::string m_color{"Red"};
    double m_radius{20.};

public:
    Ball() {}

    Ball(std::string color) {
        m_color = color;
    }

    Ball(double radius) {
        m_radius = radius;
    }

    Ball(std::string color, double radius) {
        m_color = color;
        m_radius = radius;
    }

    void print() {
        std::cout << "color: " << m_color << ", radius: " << m_radius << "\n";
    }
};

int main()
{
    Ball def;
    def.print();

    Ball black("Black");
    black.print();

    Ball thirty(30.);
    thirty.print();

    Ball blackThirty("Black", 30.);
    blackThirty.print();
}