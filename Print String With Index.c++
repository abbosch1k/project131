#include <iostream>
using namespace std;

int main() {
    string text;
    cin >> text;

    for(int i = 0; i < text.size(); i++)
        cout << i << ": " << text[i] << endl;

    return 0;
}
