#include <iostream>

int Sum(int a, int b)
{
    return a + b;
}

int Mult(int a, int b)
{
    return a * b;
}

int(*funcPtr)(int, int);
int(*SelectOperation(char sign))(int, int)
{
    switch (sign)
    {
    case '+': return Sum;
    case '*': return Mult;
    case '-': return [](auto a, auto b) { return a - b; };
    default:
        return nullptr;
    }
}

int main()
{
    int(*funcPtr)(int, int);
    funcPtr = SelectOperation('+');
}
