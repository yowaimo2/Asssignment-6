#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = true;
            break;
        }
    }
    if(found) cout << "Found" << endl;
    else cout << "Not Found" << endl;
    return 0;
}
