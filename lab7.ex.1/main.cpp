#include <iostream>
float operator "" _Kelvin(unsigned long long int a)
{
    return a - 273.15;
}
float operator "" _Fahrenheit(unsigned long long int b)
{
    b -= 32;
    b /= 1.8;
    return b;
}

int main() 
{

    float a = 300_Kelvin;
    float b = 120_Fahrenheit;
    std::cout << a << " " << b;
    return 0;

}