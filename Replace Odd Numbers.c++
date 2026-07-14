#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for(int &x : arr) {
        cin >> x;

        if(x % 2 != 0)
            x = -1;
    }

    for(int x : arr)
        cout << x << " ";

    return 0;
}
