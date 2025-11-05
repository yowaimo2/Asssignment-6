#include <iostream>
using namespace std;

int main() {
    int n, key, count = 0;
    cin >> n;
    
    int arr[10];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cin >> key;
    
    for(int i = 0; i < n; i++)
        if(arr[i] == key)
            count++;
    
    cout << count << endl;
    return 0;
}