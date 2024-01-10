//#include <iostream>
//
//class Quadrilateral {
//private:
//    // ���������� ������� ������� ����� ����������������
//    double points[8]; // �� ��� ���������� ��� ������ ����� (x1, y1, x2, y2, x3, y3, x4, y4)
//
//public:
//    // ����������� ������ � ��������� ���������
//    Quadrilateral(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
//        points[0] = x1; points[1] = y1;
//        points[2] = x2; points[3] = y2;
//        points[4] = x3; points[5] = y3;
//        points[6] = x4; points[7] = y4;
//    }
//
//    // ����� ��������� ����� ����������������
//    void printCoordinates() const {
//        for (int i = 0; i < 8; i += 2) {
//            std::cout << "Point " << i / 2 + 1 << ": (" << points[i] << ", " << points[i + 1] << ")" << std::endl;
//        }
//    }
//};
//
//class Trapezoid : public Quadrilateral {
//    // �������������� ������ � ������ ��� ��������, ���� ����������
//};
//
//class Parallelogram : public Quadrilateral {
//    // �������������� ������ � ������ ��� ���������������, ���� ����������
//};
//
//class Rectangle : public Parallelogram {
//    // �������������� ������ � ������ ��� ��������������, ���� ����������
//};
//
//class Square : public Rectangle {
//    // �������������� ������ � ������ ��� ��������, ���� ����������
//};
//
//int main() {
//    // ������ �������� �������� ��������� ������� � ��������� ���������
//    Quadrilateral quad(0.0, 0.0, 1.0, 1.0, 2.0, 0.0, 1.0, -1.0);
//    std::cout << "Quadrilateral Coordinates:\n";
//    quad.printCoordinates();
//
//    Trapezoid trap(/* ����� ��������� ���������� ��� �������� */);
//    Parallelogram para(/* ����� ��������� ���������� ��� ��������������� */);
//    Rectangle rect(/* ����� ��������� ���������� ��� �������������� */);
//    Square square(/* ����� ��������� ���������� ��� �������� */);
//
//    return 0;
//}
