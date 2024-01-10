//#include <iostream>
//
//class B {
//private:
//    int value = 10;
//
//public:
//    B() {}
//
//    // Конструктор копирования
//    B(const B& other) {
//        value = other.value + 10;
//    }
//
//    int get() const {
//        return value;
//    }
//};
//
//int main() {
//    B b1, b2 = b1, b3(b2);
//    std::cout << b1.get() << " " << b2.get() << " " << b3.get() << std::endl;
//    return 0;
//}
