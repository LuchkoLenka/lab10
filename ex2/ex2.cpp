#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

// Функція для обчислення відстані між двома точками
double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Функція для знаходження координат середини відрізка між двома точками
Point midpoint(Point p1, Point p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2.0;
    mid.y = (p1.y + p2.y) / 2.0;
    return mid;
}

int main() {
    Point A = { 0, 0 };
    int i = 2; // Припустимо, що і = 2 (номер варіанту)
    Point B = { i, i - 1 };
    Point C = { -i, i + 1 };

    // Знаходимо координати середини сторін трикутника
    Point Ma = midpoint(B, C); // Медіана з вершини A

    // Знаходимо відстані між точками
    double a = distance(B, C);
    double b = distance(A, C);
    double c = distance(A, B);

    // Знаходимо координати точки ділення бісектриси
    Point Wc;
    Wc.x = (a * A.x + b * B.x + c * C.x) / (a + b + c);
    Wc.y = (a * A.y + b * B.y + c * C.y) / (a + b + c);

    // Виводимо координати точок Ma та Wc
    cout << "Coordinates of point Ma (middle of median from vertex A): (" << Ma.x << ", " << Ma.y << ")" << endl;
    cout << "Coordinates of point Wc (point of division of the bisector): (" << Wc.x << ", " << Wc.y << ")" << endl;

    return 0;
}