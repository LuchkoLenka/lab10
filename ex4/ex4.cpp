#include <iostream>
#include <cmath>

int main() {
    // Задані константи
    const double N = 9.1;
    const double b_constant = 3.0;

    // Змінна для введення значення x
    double x;

    // Введення значення x з клавіатури
    std::cout << "Enter the value x: ";
    std::cin >> x;

    // Обчислення значення a за формулою √(x^2 + b^2)
    double a = sqrt(pow(x, 2) + pow(b_constant, 2));

    // Обчислення значення функції y за формулою y - (lg a / lg b)
    double y = x - (log10(a) / log10(b_constant));

    // Виведення результату
    std::cout << "The value of the expression y = F(x): " << y << std::endl;

    return 0;
}