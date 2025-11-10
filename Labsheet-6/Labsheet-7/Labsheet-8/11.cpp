#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    float price;

    void input() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter price: ";
        cin >> price;
    }

    void display() {
        cout << brand << " - Rs." << price << endl;
    }
};

int main() {
    Car c1, c2;

    cout << "Enter car 1 details:\n";
    c1.input();

    cout << "\nEnter car 2 details:\n";
    c2.input();

    cout << "\nCar Details:\n";
    c1.display();
    c2.display();

    return 0;
}
