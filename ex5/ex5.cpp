#include <iostream>
#include <cmath>

int main() {
    // Змінні для введення значення y та n
    double y, n;

    // Введення значення y та n з клавіатури
    std::cout << "Enter the value y: ";
    std::cin >> y;

    std::cout << "Enter the value n: ";
    std::cin >> n;

    // Перевірка області визначення (знаменник не повинен дорівнювати 0)
    if (23.1 * pow(n, 2) + cos(n) == 0) {
        std::cout << "Error: Scope not satisfied (23.1 * n^2 + cos n = 0)." << std::endl;
    }
    else {
        // Обчислення значення виразу
        double result = (pow(y, 2) - 0.8 * y + sqrt(y)) / (23.1 * pow(n, 2) + cos(n));

        // Виведення результату
        std::cout << "The value of the expression: " << result << std::endl;
    }

    return 0;
}