#include <iostream>
#include <regex>
#include <string>

using namespace std;

bool isValidFloat(const string &lexeme) {

// here i am checking the number by  the help of regular expressiong
    regex floatRegex(R"(^[-+]?[0-9]+\.[0-9]+([eE][-+]?[0-9]+)?$)");
    return regex_match(lexeme, floatRegex);
}

int main() {
int n;
cin>>n;
while(n--){
    string lexeme;
    cout << "Enter a lexeme: ";
    cin >> lexeme;

    if (isValidFloat(lexeme)) {
        cout << lexeme << " is a valid floating point number." << endl;
    } else {
        cout << lexeme << " is not a valid floating point number." << endl;
    }
    }

    return 0;
}
