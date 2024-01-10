//#include <iostream>
//#include <cmath>
//
//class Angle {
//private:
//    double degrees; // �������� ���� � ��������
//
//public:
//    // ����������� ������
//    Angle() : degrees(0.0) {}
//
//    // ������� ��� ��������� �������� ���� � ��������
//    void setDegrees(double deg) {
//        degrees = deg;
//    }
//
//    // ������� ��� ��������� �������� ���� � ��������
//    double getDegrees() const {
//        return degrees;
//    }
//
//    // ������� ��� ������ �������� ���� � ��������
//    void displayDegrees() const {
//        std::cout << "���� � ��������: " << degrees << "�" << std::endl;
//    }
//
//    // ������� ��� ������ �������� ���� � ��������
//    void displayRadians() const {
//        double radians = degrees * (3.14 / 180.0); // ������� � �������
//        std::cout << "���� � ��������: " << radians << " ������" << std::endl;
//    }
//
//    // ������� ��� ���������� ������ ����
//    double calculateSin() const {
//        double radians = degrees * (3.14 / 180.0); // ������� � �������
//        return sin(radians); // ���������� ������ ����
//    }
//};
//
//int main() {
//    system("chcp 1251");
//    Angle myAngle;
//    double angleValue;
//
//    std::cout << "������� �������� ���� � ��������: ";
//    std::cin >> angleValue;
//
//    myAngle.setDegrees(angleValue);
//
//    myAngle.displayDegrees();
//    myAngle.displayRadians();
//
//    std::cout << "����� ����: " << myAngle.calculateSin() << std::endl;
//
//    return 0;
//}
