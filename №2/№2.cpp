#include <iostream>

class Numbers {
    double m_a, m_b, m_c;
    
public:
    void setValues(int a, int b, int c) {
        m_a = a;
        m_b = b;
        m_c = c;
    }

    void print() {
        std::cout << "<" << m_a << ", " << m_b << ", " << m_c << ">\n";
    }
};

int main()
{
    Numbers point;
    point.setValues(3.0, 4.0, 5.0);

    point.print();

    return 0;
}
