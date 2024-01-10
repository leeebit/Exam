//#include <iostream>
//
//class Vector5D {
//private:
//    double coordinates[5]; // Координаты вектора
//
//public:
//    // Конструктор класса
//    Vector5D(double coord0, double coord1, double coord2, double coord3, double coord4) {
//        coordinates[0] = coord0;
//        coordinates[1] = coord1;
//        coordinates[2] = coord2;
//        coordinates[3] = coord3;
//        coordinates[4] = coord4;
//    }
//
//    // Сложение векторов
//    Vector5D operator+(const Vector5D& other) const {
//        return Vector5D(
//            coordinates[0] + other.coordinates[0],
//            coordinates[1] + other.coordinates[1],
//            coordinates[2] + other.coordinates[2],
//            coordinates[3] + other.coordinates[3],
//            coordinates[4] + other.coordinates[4]
//        );
//    }
//
//    // Вычитание векторов
//    Vector5D operator-(const Vector5D& other) const {
//        return Vector5D(
//            coordinates[0] - other.coordinates[0],
//            coordinates[1] - other.coordinates[1],
//            coordinates[2] - other.coordinates[2],
//            coordinates[3] - other.coordinates[3],
//            coordinates[4] - other.coordinates[4]
//        );
//    }
//
//    // Скалярное произведение
//    double dotProduct(const Vector5D& other) const {
//        double result = 0.0;
//        for (int i = 0; i < 5; ++i) {
//            result += coordinates[i] * other.coordinates[i];
//        }
//        return result;
//    }
//
//    // Векторное произведение
//    Vector5D operator%(const Vector5D& other) const {
//        return Vector5D(
//            coordinates[1] * other.coordinates[2] - coordinates[2] * other.coordinates[1],
//            coordinates[2] * other.coordinates[0] - coordinates[0] * other.coordinates[2],
//            coordinates[0] * other.coordinates[1] - coordinates[1] * other.coordinates[0],
//            coordinates[3] * other.coordinates[4] - coordinates[4] * other.coordinates[3],
//            coordinates[4] * other.coordinates[3] - coordinates[3] * other.coordinates[4]
//        );
//    }
//
//    // Умножение вектора на скаляр
//    Vector5D operator*(double scalar) const {
//        return Vector5D(
//            coordinates[0] * scalar,
//            coordinates[1] * scalar,
//            coordinates[2] * scalar,
//            coordinates[3] * scalar,
//            coordinates[4] * scalar
//        );
//    }
//
//    // Вывод вектора
//    void printVector() const {
//        std::cout << "Vector: (" << coordinates[0] << ", " << coordinates[1] << ", " << coordinates[2]
//            << ", " << coordinates[3] << ", " << coordinates[4] << ")" << std::endl;
//    }
//};
//
//int main() {
//
//    system("chcp 1251");
//    Vector5D vec1(1.0, 2.0, 3.0, 4.0, 5.0);
//    Vector5D vec2(2.0, 3.0, 4.0, 5.0, 6.0);
//
//    std::cout << "Vector 1: ";
//    vec1.printVector();
//
//    std::cout << "Vector 2: ";
//    vec2.printVector();
//
//    Vector5D sum = vec1 + vec2;
//    std::cout << "\nVector 1 + Vector 2: ";
//    sum.printVector();
//
//    Vector5D difference = vec1 - vec2;
//    std::cout << "Vector 1 - Vector 2: ";
//    difference.printVector();
//
//    double dot = vec1.dotProduct(vec2);
//    std::cout << "Dot Product (Scalar): " << dot << std::endl;
//
//    Vector5D cross = vec1 % vec2;
//    std::cout << "Cross Product (Vector): ";
//    cross.printVector();
//
//    double scalar = 3.0;
//    Vector5D scaled = vec1 * scalar;
//    std::cout << "\nVector 1 * Scalar: ";
//    scaled.printVector();
//
//    return 0;
//}
