//#include <iostream>
//#include <string>
//
//// Базовый класс Человек (Person)
//class Person {
//protected:
//    std::string name;
//    int age;
//
//public:
//    Person(const std::string& n, int a) : name(n), age(a) {}
//
//    void displayInfo() const {
//        std::cout << "Name: " << name << ", Age: " << age << std::endl;
//    }
//};
//
//// Класс Студент (Student), наследующий от Человека
//class Student : public Person {
//private:
//    std::string university;
//    int studentID;
//
//public:
//    Student(const std::string& n, int a, const std::string& u, int id)
//        : Person(n, a), university(u), studentID(id) {}
//
//    void displayInfo() const {
//        std::cout << "Student - ";
//        Person::displayInfo();
//        std::cout << "University: " << university << ", Student ID: " << studentID << std::endl;
//    }
//};
//
//// Класс Преподаватель (Teacher), также наследующий от Человека
//class Teacher : public Person {
//private:
//    std::string institution;
//    std::string subject;
//
//public:
//    Teacher(const std::string& n, int a, const std::string& inst, const std::string& sub)
//        : Person(n, a), institution(inst), subject(sub) {}
//
//    void displayInfo() const {
//        std::cout << "Teacher - ";
//        Person::displayInfo();
//        std::cout << "Institution: " << institution << ", Subject: " << subject << std::endl;
//    }
//};
//
//int main() {
//    Person person("John Doe", 30);
//    Student student("Alice", 20, "XYZ University", 1234);
//    Teacher teacher("Professor Smith", 45, "ABC College", "Computer Science");
//
//    std::cout << "Person Information:" << std::endl;
//    person.displayInfo();
//
//    std::cout << "\nStudent Information:" << std::endl;
//    student.displayInfo();
//
//    std::cout << "\nTeacher Information:" << std::endl;
//    teacher.displayInfo();
//
//    return 0;
//}
