//#include <iostream>
//#include <cmath>
//
//class Vector3D {
//private:
//    double r; // ������ (����� �������)
//    double theta; // ���� ����� �������� � ���� X � ��������
//    double phi; // ���� ����� ��������� ������� �� ��������� XY � ���� X � ��������
//
//public:
//    // ����������� ������ ��� ����� ������� � �������� �����������
//    void inputVector() {
//        std::cout << "������� ����� ������� (r): ";
//        std::cin >> r;
//        std::cout << "������� ���� theta (� ��������): ";
//        std::cin >> theta;
//        std::cout << "������� ���� phi (� ��������): ";
//        std::cin >> phi;
//
//        // ������� ����� �� �������� � �������
//        theta = theta * 3.14 / 180.0;
//        phi = phi * 3.14 / 180.0;
//    }
//
//    // ������� ��� ������ ������� � �������� �����������
//    void printPolar() const {
//        std::cout << "����� ������� (r): " << r << std::endl;
//        std::cout << "���� theta (� ��������): " << theta << std::endl;
//        std::cout << "���� phi (� ��������): " << phi << std::endl;
//    }
//
//    // ������� ��� �������������� �������� ��������� � ���������
//    void polarToCartesian() {
//        double x = r * sin(theta) * cos(phi);
//        double y = r * sin(theta) * sin(phi);
//        double z = r * cos(theta);
//
//        std::cout << "������ � ���������� �����������: (" << x << ", " << y << ", " << z << ")" << std::endl;
//    }
//};
//
//int main() {
//    system("chcp 1251");
//
//    Vector3D vec;
//    vec.inputVector();
//
//    std::cout << "\n������ ������ � �������� �����������:\n";
//    vec.printPolar();
//
//    std::cout << "\n�������������� ������� � ��������� ����������:\n";
//    vec.polarToCartesian();
//
//    return 0;
//}
