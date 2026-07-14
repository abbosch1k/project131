#include <iostream>
using namespace std;

int main() {
    int arr[6];

    for(int &x : arr)
        cin >> x;

    for(int i = 0; i < 6; i += 2)
        cout << arr[i] << " ";

    return 0;
}
