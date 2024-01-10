//#include <iostream>
//#include <cmath>
//
//class Angle {
//private:
//    double degrees; // Величина угла в градусах
//
//public:
//    // Конструктор класса
//    Angle(double deg) : degrees(deg) {}
//
//    // Функция для установки угла в градусах
//    void setAngle(double deg) {
//        degrees = deg;
//    }
//
//    // Функция для получения угла в градусах
//    double getAngle() const {
//        return degrees;
//    }
//
//    // Функция для вывода величины угла
//    void display() const {
//        std::cout << "Угол: " << degrees << " градусов" << std::endl;
//    }
//
//    // Функция для перевода угла в радианы
//    double toRadians() const {
//        return degrees * (3.14 / 180.0);
//    }
//
//    // Функция для нахождения синуса угла
//    double sinValue() const {
//        return sin(toRadians());
//    }
//};
//
//int main() {
//    system("chcp 1251");
//    double angleValue;
//    std::cout << "Введите величину угла в градусах: ";
//    std::cin >> angleValue;
//
//    Angle angle(angleValue);
//
//    angle.display(); // Вывод величины угла
//
//    std::cout << "Угол в радианах: " << angle.toRadians() << std::endl;
//    std::cout << "Синус угла: " << angle.sinValue() << std::endl;
//
//    return 0;
//}
