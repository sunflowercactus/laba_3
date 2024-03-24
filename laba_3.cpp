#include <iostream>
using namespace std;
// Базовый класс "вектор на плоскости"
class Vector2D {
protected:
    double x;
    double y;

public:
    Vector2D(double x_val, double y_val) : x(x_val), y(y_val) {}

    void printCoordinates() {
        cout << "2D Vector coordinaty: (" << x << ", " << y << ")" << endl;
    }
};

// Производный класс "вектор в трехмерном пространстве"
class Vector3D : public Vector2D {
private:
    double z;

public:
    Vector3D(double x_val, double y_val, double z_val) : Vector2D(x_val, y_val), z(z_val) {}

    void printCoordinates() {
        cout << "3D Vector koordinaty: (" << x << ", " << y << ", " << z << ")" << endl;
    }

    void printCoordinatesDynamic() {
        Vector2D::printCoordinates();
        cout << "Dobavili coordinatu: " << z << endl;
    }
};

int main() {
    // Создание объектов
    Vector2D vec2D(1.0, 2.0);
    Vector3D vec3D(3.0, 4.0, 5.0);

    // Вызов функций для базового класса и производного класса
    vec2D.printCoordinates();
    vec3D.printCoordinates(); 
    vec3D.printCoordinatesDynamic(); 

    return 0;
}
