#include <iostream>
#include <cmath>
using namespace std;

//Write sumSqrt() here.
float sumSqrt(int n) {

    float sum = 0;

    while (n > 0)
        sum += 1/pow(n--, 0.5);

    return sum;
}


int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    double h = sumSqrt(-5);
    double i = sumSqrt(3);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";
    cout << h << "\n" << i << "\n";
}