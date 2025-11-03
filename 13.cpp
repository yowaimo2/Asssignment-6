#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    
    string names[100];
    for(int i = 0; i < n; i++)
        getline(cin, names[i]);
    
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-i-1; j++)
            if(names[j] > names[j+1])
                swap(names[j], names[j+1]);
    
    for(int i = 0; i < n; i++)
        cout << names[i] << endl;
    
    return 0;
}