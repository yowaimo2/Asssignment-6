#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;
    
    int matrix1[100][100], matrix2[10][10], diff[10][10];
    
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> matrix1[i][j];
    
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> matrix2[i][j];
    
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            cout << diff[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}