//#include <iostream>
//#include <cmath>
//
//class Vector3D {
//private:
//    double r; // радиус (длина вектора)
//    double theta; // угол между вектором и осью X в радианах
//    double phi; // угол между проекцией вектора на плоскость XY и осью X в радианах
//
//public:
//    //  онструктор класса дл€ ввода вектора в пол€рных координатах
//    void inputVector() {
//        std::cout << "¬ведите длину вектора (r): ";
//        std::cin >> r;
//        std::cout << "¬ведите угол theta (в градусах): ";
//        std::cin >> theta;
//        std::cout << "¬ведите угол phi (в градусах): ";
//        std::cin >> phi;
//
//        // ѕеревод углов из градусов в радианы
//        theta = theta * 3.14 / 180.0;
//        phi = phi * 3.14 / 180.0;
//    }
//
//    // ‘ункци€ дл€ вывода вектора в пол€рных координатах
//    void printPolar() const {
//        std::cout << "ƒлина вектора (r): " << r << std::endl;
//        std::cout << "”гол theta (в радианах): " << theta << std::endl;
//        std::cout << "”гол phi (в радианах): " << phi << std::endl;
//    }
//
//    // ‘ункци€ дл€ преобразовани€ пол€рных координат в декартовы
//    void polarToCartesian() {
//        double x = r * sin(theta) * cos(phi);
//        double y = r * sin(theta) * sin(phi);
//        double z = r * cos(theta);
//
//        std::cout << "¬ектор в декартовых координатах: (" << x << ", " << y << ", " << z << ")" << std::endl;
//    }
//};
//
//int main() {
//    system("chcp 1251");
//
//    Vector3D vec;
//    vec.inputVector();
//
//    std::cout << "\n¬веден вектор в пол€рных координатах:\n";
//    vec.printPolar();
//
//    std::cout << "\nѕреобразование вектора в декартовы координаты:\n";
//    vec.polarToCartesian();
//
//    return 0;
//}
