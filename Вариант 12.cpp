//#include <iostream>
//#include <cmath>
//
//class Angle {
//private:
//    double degrees; // Величина угла в градусах
//
//public:
//    // Конструктор класса
//    Angle() : degrees(0.0) {}
//
//    // Функция для установки значения угла в градусах
//    void setDegrees(double deg) {
//        degrees = deg;
//    }
//
//    // Функция для получения значения угла в градусах
//    double getDegrees() const {
//        return degrees;
//    }
//
//    // Функция для вывода значения угла в градусах
//    void displayDegrees() const {
//        std::cout << "Угол в градусах: " << degrees << "°" << std::endl;
//    }
//
//    // Функция для вывода значения угла в радианах
//    void displayRadians() const {
//        double radians = degrees * (3.14 / 180.0); // Перевод в радианы
//        std::cout << "Угол в радианах: " << radians << " радиан" << std::endl;
//    }
//
//    // Функция для нахождения синуса угла
//    double calculateSin() const {
//        double radians = degrees * (3.14 / 180.0); // Перевод в радианы
//        return sin(radians); // Вычисление синуса угла
//    }
//};
//
//int main() {
//    system("chcp 1251");
//    Angle myAngle;
//    double angleValue;
//
//    std::cout << "Введите величину угла в градусах: ";
//    std::cin >> angleValue;
//
//    myAngle.setDegrees(angleValue);
//
//    myAngle.displayDegrees();
//    myAngle.displayRadians();
//
//    std::cout << "Синус угла: " << myAngle.calculateSin() << std::endl;
//
//    return 0;
//}
