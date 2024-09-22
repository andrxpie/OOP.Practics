#include <iostream>

class Numbers {
public:
    int num1;
    int num2;

    Numbers() {}

    Numbers(int num1, int num2) {
        set(num1, num2);
    }

    void set(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    void print() {
        std::cout << "Numbers(" << num1 << ", " << num2 << ")" << std::endl;
    }
};

int main() {
    Numbers n1;
    n1.set(3, 3);

    Numbers n2{ 4, 4 };

    n1.print();
    n2.print();

    return 0;
}