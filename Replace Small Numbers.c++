#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for(int &x : arr) {
        cin >> x;

        if(x < 10)
            x = 10;
    }

    for(int x : arr)
        cout << x << " ";

    return 0;
}
