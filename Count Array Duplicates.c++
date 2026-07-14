#include <iostream>
using namespace std;

int main() {
    int arr[5], count = 0;

    for(int &x : arr)
        cin >> x;

    for(int i = 0; i < 5; i++)
        for(int j = i + 1; j < 5; j++)
            if(arr[i] == arr[j])
                count++;

    cout << count;
    return 0;
}
