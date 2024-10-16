#include <iostream>
#include <string>

class Thing
{
    std::string m_color;
    double m_radius;

public:
    Thing()
    {
        m_color = "blue";
        m_radius = 20.;
    }

    Thing(const std::string& color)
    {
        m_color = color;
        m_radius = 20.;
    }

    Thing(double radius)
    {
        m_color = "blue";
        m_radius = radius;
    }

    Thing(const std::string& color, double radius)
        :m_radius(radius), m_color(color)
    {
    }

    void print()
    {
        std::cout << "color: " << m_color << " and radius: " << m_radius << "\n";
    }
};

int main()
{
    Thing defl;
    defl.print();

    Thing red("red");
    red.print();

    Thing thirty(30.0);
    thirty.print();

    Thing redThirty("red", 30.0);
    redThirty.print();

    return 0;
}