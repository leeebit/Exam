//#include <iostream>
//
//class Quadrilateral {
//private:
//    // Координаты четырех угловых точек четырехугольника
//    double points[8]; // По две координаты для каждой точки (x1, y1, x2, y2, x3, y3, x4, y4)
//
//public:
//    // Конструктор класса с передачей координат
//    Quadrilateral(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
//        points[0] = x1; points[1] = y1;
//        points[2] = x2; points[3] = y2;
//        points[4] = x3; points[5] = y3;
//        points[6] = x4; points[7] = y4;
//    }
//
//    // Вывод координат точек четырехугольника
//    void printCoordinates() const {
//        for (int i = 0; i < 8; i += 2) {
//            std::cout << "Point " << i / 2 + 1 << ": (" << points[i] << ", " << points[i + 1] << ")" << std::endl;
//        }
//    }
//};
//
//class Trapezoid : public Quadrilateral {
//    // Дополнительные методы и данные для трапеции, если необходимо
//};
//
//class Parallelogram : public Quadrilateral {
//    // Дополнительные методы и данные для параллелограмма, если необходимо
//};
//
//class Rectangle : public Parallelogram {
//    // Дополнительные методы и данные для прямоугольника, если необходимо
//};
//
//class Square : public Rectangle {
//    // Дополнительные методы и данные для квадрата, если необходимо
//};
//
//int main() {
//    // Пример создания объектов различных классов с передачей координат
//    Quadrilateral quad(0.0, 0.0, 1.0, 1.0, 2.0, 0.0, 1.0, -1.0);
//    std::cout << "Quadrilateral Coordinates:\n";
//    quad.printCoordinates();
//
//    Trapezoid trap(/* Здесь передайте координаты для трапеции */);
//    Parallelogram para(/* Здесь передайте координаты для параллелограмма */);
//    Rectangle rect(/* Здесь передайте координаты для прямоугольника */);
//    Square square(/* Здесь передайте координаты для квадрата */);
//
//    return 0;
//}
