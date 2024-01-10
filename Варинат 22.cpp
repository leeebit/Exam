//#include <iostream>
//
//template <typename T>
//class Stack {
//private:
//    T* elements; // ��������� �� ������ ��������� �����
//    int capacity; // ������� �����
//    int top; // ������ �������� ��������
//
//public:
//    // ����������� ������
//    Stack(int size = 10) : capacity(size), top(-1) {
//        elements = new T[capacity];
//    }
//
//    // ���������� ������
//    ~Stack() {
//        delete[] elements;
//    }
//
//    // ���������� �������� � ����
//    void push(const T& item) {
//        if (top == capacity - 1) {
//            std::cout << "���� �����, ���������� ��������� �������� push()." << std::endl;
//            return;
//        }
//        elements[++top] = item;
//    }
//
//    // �������� �������� �������� �� �����
//    void pop() {
//        if (top == -1) {
//            std::cout << "���� ����, ���������� ��������� �������� pop()." << std::endl;
//            return;
//        }
//        --top;
//    }
//
//    // �������� ������� ���������� �������� � �����
//    bool contains(const T& item) const {
//        for (int i = 0; i <= top; ++i) {
//            if (elements[i] == item) {
//                return true;
//            }
//        }
//        return false;
//    }
//
//    // ����� ������� ��������� �����
//    void display() const {
//        if (top == -1) {
//            std::cout << "���� ����." << std::endl;
//            return;
//        }
//
//        std::cout << "������� �������� �����: ";
//        for (int i = 0; i <= top; ++i) {
//            std::cout << elements[i] << " ";
//        }
//        std::cout << std::endl;
//    }
//};
//
//int main() {
//
//    system("chcp 1251");
//    // ������ ������������� ������� ������ Stack � ����� int
//    Stack<int> intStack;
//
//    intStack.push(5);
//    intStack.push(10);
//    intStack.push(15);
//
//    intStack.display(); // ����� ������� ��������� �����
//
//    std::cout << "������� ������� �� �����." << std::endl;
//    intStack.pop();
//
//    intStack.display(); // ����� ������� ��������� �����
//
//    int searchItem = 10;
//    if (intStack.contains(searchItem)) {
//        std::cout << "������� " << searchItem << " ������ � �����." << std::endl;
//    }
//    else {
//        std::cout << "������� " << searchItem << " �� ������ � �����." << std::endl;
//    }
//
//    return 0;
//}
