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
//#include <vector>
//
//template <typename T>
//class NaryTreeNode {
//public:
//    T data;
//    std::vector<NaryTreeNode<T>*> children;
//
//    NaryTreeNode(const T& value) : data(value) {}
//};
//
//template <typename T>
//class NaryTree {
//private:
//    NaryTreeNode<T>* root;
//
//public:
//    NaryTree() : root(nullptr) {}
//
//    void insert(const T& value) {
//        // Реализация вставки в n-арное дерево
//    }
//
//    void display() const {
//        // Реализация вывода n-арного дерева
//    }
//};
//
//template <typename T>
//class BinaryTreeNode {
//public:
//    T data;
//    BinaryTreeNode<T>* left;
//    BinaryTreeNode<T>* right;
//
//    BinaryTreeNode(const T& value) : data(value), left(nullptr), right(nullptr) {}
//};
//
//template <typename T>
//class BinaryTree {
//private:
//    BinaryTreeNode<T>* root;
//
//public:
//    BinaryTree() : root(nullptr) {}
//
//    void insert(const T& value) {
//        // Реализация вставки в бинарное дерево
//    }
//
//    void display() const {
//        // Реализация вывода бинарного дерева
//    }
//};
//
//
//int main() {
//    LinkedList<int> myList;
//    system("chcp 1251");
//    myList.insert(5);
//    myList.insert(10);
//    myList.insert(15);
//
//    std::cout << "Список элементов:" << std::endl;
//    myList.display();
//
//    return 0;
//}
//
//
