#include <iostream>
using namespace std;

int main(){
    int r, c;
    
    cout << "Type the number of rows in the arrays: ";
    cin >> r;
    cout << "Type the number of columns in the arrays: ";
    cin >> c;

    int *array1 = new int[r][c];
    int *array2 = new int[r][c];

    cout << endl << "--- Array 1 ---" << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << "Type a number for position [" << i << "][" << j << "] for the array [1]: ";
            cin >> array1[i][j];
        } 
    }

    cout << endl << "--- Array 2 ---" << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << "Type a number for position [" << i << "][" << j << "] for the array [2]: ";
            cin >> array2[i][j];
        }
    }
 
    return 0;
}