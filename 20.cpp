#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[10];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    if(n > 0)
        cout << arr[n-1] << endl;
    else
        cout << "Array is empty" << endl;
    
    return 0;
}