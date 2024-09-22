#include <iostream>
#include <cassert>

class Stack {
    int size = 0;
    int arr[10];

public:
    void reset() {
        for (int i = 0; i < size; i++) {
            arr[i] = NULL;
        } size = 0;
    }

    bool push(int n) {
        if (size == 10) { return false; }

        arr[size] = n;
        ++size;
    }

    void pop() {
        assert(size != 0);

        --size;
        arr[size] = NULL;
    }

    void print() {
        if (size == 0) { std::cout << "()\n"; return; }

        std::cout << "(";
        for (int i = 0; i < size; i++) {
            std::cout << " " << arr[i] << "";
        } std::cout << " )\n";
    }
};

int main()
{
    Stack stack;
    stack.reset();

    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();

    stack.print();

    return 0;
}