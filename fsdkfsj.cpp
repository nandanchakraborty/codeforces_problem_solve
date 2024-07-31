
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char c;
    int state = 0, i = 0;

    cout << "\nEnter a string: ";
    getline(cin, s);

    while (s[i] != '\0') {
        switch (state) {
        case 0:
            c = s[i++];
            if (c == 'a') state = 1;
            else if (c == 'b') state = 2;
            else state = 6;
            break;
        case 1:
            c = s[i++];
            if (c == 'a') state = 3;
            else if (c == 'b') state = 4;
            else state = 6;
            break;
        case 2:
            c = s[i++];
            if (c == 'a') state = 6;
            else if (c == 'b') state = 2;
            else state = 6;
            break;
        case 3:
            c = s[i++];
            if (c == 'a') state = 3;
            else if (c == 'b') state = 2;
            else state = 6;
            break;
        case 4:
            c = s[i++];
            if (c == 'a') state = 6;
            else if (c == 'b') state = 5;
            else state = 6;
            break;
        case 5:
            c = s[i++];
            if (c == 'a') state = 6;
            else if (c == 'b') state = 2;
            else state = 6;
            break;
        case 6:
            cout << "\n" << s << " is not recognised." << endl;
            return 0;
        }
    }

    if (state == 1)
        cout << "\n" << s << " is accepted under rule 'a'" << endl;
    else if (state == 2 || state == 4)
        cout << "\n" << s << " is accepted under rule 'a*b+'" << endl;
    else if (state == 5)
        cout << "\n" << s << " is accepted under rule 'abb'" << endl;

    return 0;
}

