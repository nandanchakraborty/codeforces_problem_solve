
#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        int pounds1, shillings1, pence1;
        int pounds2, shillings2, pence2;
        int totalPounds, totalShillings, totalPence;

        cout << "Enter the first amount: £";
        cin >> pounds1 >> shillings1 >> pence1;

        cout << "Enter the second amount: £";
        cin >> pounds2 >> shillings2 >> pence2;

        totalPence = pence1 + pence2;
        totalShillings = shillings1 + shillings2 + (totalPence / 12);
        totalPence = totalPence % 12;

        totalShillings += pounds1 * 20 + pounds2 * 20;
        totalPounds = totalShillings / 20;
        totalShillings = totalShillings % 20;

        cout << "Total is £" << totalPounds << "." << totalShillings << "." << totalPence << endl;

        cout << "Do you wish to continue (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
