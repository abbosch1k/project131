#include <iostream>
using namespace std;

int main() {
    int arr[7], count = 0;

    for(int &x : arr) {
        cin >> x;

        if(x < 0)
            count++;
    }

    cout << count;
    return 0;
}
