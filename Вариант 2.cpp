//#include <iostream>
//#include <cmath>
//
//class Angle {
//private:
//    double degrees; // �������� ���� � ��������
//
//public:
//    // ����������� ������
//    Angle(double deg) : degrees(deg) {}
//
//    // ������� ��� ��������� ���� � ��������
//    void setAngle(double deg) {
//        degrees = deg;
//    }
//
//    // ������� ��� ��������� ���� � ��������
//    double getAngle() const {
//        return degrees;
//    }
//
//    // ������� ��� ������ �������� ����
//    void display() const {
//        std::cout << "����: " << degrees << " ��������" << std::endl;
//    }
//
//    // ������� ��� �������� ���� � �������
//    double toRadians() const {
//        return degrees * (3.14 / 180.0);
//    }
//
//    // ������� ��� ���������� ������ ����
//    double sinValue() const {
//        return sin(toRadians());
//    }
//};
//
//int main() {
//    system("chcp 1251");
//    double angleValue;
//    std::cout << "������� �������� ���� � ��������: ";
//    std::cin >> angleValue;
//
//    Angle angle(angleValue);
//
//    angle.display(); // ����� �������� ����
//
//    std::cout << "���� � ��������: " << angle.toRadians() << std::endl;
//    std::cout << "����� ����: " << angle.sinValue() << std::endl;
//
//    return 0;
//}
