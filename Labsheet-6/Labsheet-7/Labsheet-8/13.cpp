#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    float marks;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << name << " " << age << " " << marks;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
