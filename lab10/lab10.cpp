#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14159265359;

// Функція для обчислення площі поверхні сфери
double surfaceArea(double r) {
    return 4 * pi * pow(r, 2);
}

// Функція для обчислення об'єму сфери
double volume(double r) {
    return (4 * pi * pow(r, 3)) / 3;
}

int main() {
    double radius;
    const double speed_of_light = 299792; // швидкість світла у км/с
    const double seconds_in_a_day = 86400; // кількість секунд у добі
    const double seconds_in_an_hour = 3600; // кількість секунд у годині

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Обчислення площі поверхні та об'єму сфери
    double surface = surfaceArea(radius);
    double vol = volume(radius);

    cout << "Surface area of ​​a sphere: " << surface << endl;
    cout << "Volume of the sphere: " << vol << endl;

    // Обчислення відстані, пройденої світлом за добу та годину
    double distance_per_day = speed_of_light * seconds_in_a_day;
    double distance_per_hour = speed_of_light * seconds_in_an_hour;

    cout << "Distance traveled by light per day: " << distance_per_day << " km" << endl;
    cout << "Distance traveled by light per hour: " << distance_per_hour << " km" << endl;

    return 0;
}