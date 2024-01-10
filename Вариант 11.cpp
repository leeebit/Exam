//#include <iostream>
//
//template <typename T>
//class ListNode {
//public:
//    T data;
//    ListNode<T>* next;
//
//    ListNode(const T& value) : data(value), next(nullptr) {}
//};
//
//template <typename T>
//class LinkedList {
//private:
//    ListNode<T>* head;
//
//public:
//    LinkedList() : head(nullptr) {}
//
//    void insert(const T& value) {
//        ListNode<T>* newNode = new ListNode<T>(value);
//        newNode->next = head;
//        head = newNode;
//    }
//
//    void display() const {
//        ListNode<T>* current = head;
//        while (current) {
//            std::cout << current->data << " ";
//            current = current->next;
//        }
//        std::cout << std::endl;
//    }
//};
//
//template <typename T>
//class Stack {
//private:
//    ListNode<T>* top;
//
//public:
//    Stack() : top(nullptr) {}
//
//    void push(const T& value) {
//        ListNode<T>* newNode = new ListNode<T>(value);
//        newNode->next = top;
//        top = newNode;
//    }
//
//    void pop() {
//        if (top) {
//            ListNode<T>* temp = top;
//            top = top->next;
//            delete temp;
//        }
//    }
//
//    void display() const {
//        ListNode<T>* current = top;
//        while (current) {
//            std::cout << current->data << " ";
//            current = current->next;
//        }
//        std::cout << std::endl;
//    }
//};
//
//
//template <typename T>
//class Queue {
//private:
//    ListNode<T>* front;
//    ListNode<T>* rear;
//
//public:
//    Queue() : front(nullptr), rear(nullptr) {}
//
//    void enqueue(const T& value) {
//        ListNode<T>* newNode = new ListNode<T>(value);
//        if (!front) {
//            front = rear = newNode;
//        }
//        else {
//            rear->next = newNode;
//            rear = newNode;
//        }
//    }
//
//    void dequeue() {
//        if (front) {
//            ListNode<T>* temp = front;
//            front = front->next;
//            delete temp;
//        }
//    }
//
//    void display() const {
//        ListNode<T>* current = front;
//        while (current) {
//            std::cout << current->data << " ";
//            current = current->next;
//        }
//        std::cout << std::endl;
//    }
//};
//
//int main() {
//    LinkedList<int> myList;
//    Stack<int> myStack;
//    Queue<int> myQueue;
//
//
//    system("chcp 1251");
//    // Добавление элементов в список
//    myList.insert(10);
//    myList.insert(20);
//    myList.insert(30);
//
//    // Вывод элементов списка
//    std::cout << "Элементы списка: ";
//    myList.display();
//
//    // Добавление элементов в стек
//    myStack.push(10);
//    myStack.push(20);
//    myStack.push(30);
//
//    // Вывод элементов стека
//    std::cout << "Элементы стека: ";
//    myStack.display();
//
//    // Добавление элементов в очередь
//    myQueue.enqueue(10);
//    myQueue.enqueue(20);
//    myQueue.enqueue(30);
//
//    // Вывод элементов очереди
//    std::cout << "Элементы очереди: ";
//    myQueue.display();
//
//    return 0;
//}
//
