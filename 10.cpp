#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    
    int matrix1[10][10], matrix2[10][10], product[10][10];
    
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> matrix1[i][j];
    
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> matrix2[i][j];
    
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++) {
            product[i][j] = 0;
            for(int k = 0; k < c1; k++)
                product[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++)
            cout << product[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}