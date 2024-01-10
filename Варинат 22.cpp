//#include <iostream>
//
//template <typename T>
//class Stack {
//private:
//    T* elements; // Указатель на массив элементов стека
//    int capacity; // Емкость стека
//    int top; // Индекс верхнего элемента
//
//public:
//    // Конструктор класса
//    Stack(int size = 10) : capacity(size), top(-1) {
//        elements = new T[capacity];
//    }
//
//    // Деструктор класса
//    ~Stack() {
//        delete[] elements;
//    }
//
//    // Добавление элемента в стек
//    void push(const T& item) {
//        if (top == capacity - 1) {
//            std::cout << "Стек полон, невозможно выполнить операцию push()." << std::endl;
//            return;
//        }
//        elements[++top] = item;
//    }
//
//    // Удаление верхнего элемента из стека
//    void pop() {
//        if (top == -1) {
//            std::cout << "Стек пуст, невозможно выполнить операцию pop()." << std::endl;
//            return;
//        }
//        --top;
//    }
//
//    // Проверка наличия указанного элемента в стеке
//    bool contains(const T& item) const {
//        for (int i = 0; i <= top; ++i) {
//            if (elements[i] == item) {
//                return true;
//            }
//        }
//        return false;
//    }
//
//    // Вывод текущих элементов стека
//    void display() const {
//        if (top == -1) {
//            std::cout << "Стек пуст." << std::endl;
//            return;
//        }
//
//        std::cout << "Текущие элементы стека: ";
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
//    // Пример использования шаблона класса Stack с типом int
//    Stack<int> intStack;
//
//    intStack.push(5);
//    intStack.push(10);
//    intStack.push(15);
//
//    intStack.display(); // Вывод текущих элементов стека
//
//    std::cout << "Удаляем элемент из стека." << std::endl;
//    intStack.pop();
//
//    intStack.display(); // Вывод текущих элементов стека
//
//    int searchItem = 10;
//    if (intStack.contains(searchItem)) {
//        std::cout << "Элемент " << searchItem << " найден в стеке." << std::endl;
//    }
//    else {
//        std::cout << "Элемент " << searchItem << " не найден в стеке." << std::endl;
//    }
//
//    return 0;
//}
