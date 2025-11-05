#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;
    
    int arr[10];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cin >> key;
    
    for(int i = 0; i < n; i++)
        if(arr[i] == key) {
            cout << "Present" << endl;
            return 0;
        }
    
    cout << "Not Present" << endl;
    return 0;
}