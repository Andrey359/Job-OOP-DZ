
#include <iostream>

using namespace std;

class Drob {
    float a = 2;
    float b = 2;
public:
    Drob(float a, float b) {
        this->a = a;
        this->b = b;
    }
    float Add() {
        return a + b;
    }
    float Cat() {
        return a - b;
    }
    float Mul() {
        return a * b;
    }
    float Div() {
        return a / b;
    }

};

int main()
{
    Drob f(2, 2);
    cout << f.Mul();
}
