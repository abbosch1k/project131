#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    for(char c : text)
        if(!isdigit(c))
            cout << c;

    return 0;
}
