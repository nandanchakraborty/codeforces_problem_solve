#include <iostream>
using namespace std;

const int ESC = 27;

class TollBooth {
private:
    unsigned int totalCars;
    double totalCash;

public:
    TollBooth() : totalCars(0), totalCash(0.0) {}

    void payingCar() {
        totalCars++;
        totalCash += 0.50;
    }

    void nopayCar() {
        totalCars++;
    }

    void display() const {
        cout << "Total Cars: " << totalCars << endl;
        cout << "Total Cash: $" << totalCash << endl;
    }
};

int main() {
    TollBooth booth;

    cout << "Press 'P' to count a paying car, 'N' to count a nonpaying car, or 'Esc' to exit." << endl;

    char ch;
    while (true) {
        ch = cin.get(); // Get a character from the user

        if (ch == 'P' || ch == 'p') {
            booth.payingCar();
            cout << "Paying car counted." << endl;
        } else if (ch == 'N' || ch == 'n') {
            booth.nopayCar();
            cout << "Nonpaying car counted." << endl;
        } else if (ch == ESC) {
            booth.display();
            break;
        } else {
            cout << "Invalid input. Press 'P', 'N', or 'Esc'." << endl;
        }
    }

    return 0;
}
