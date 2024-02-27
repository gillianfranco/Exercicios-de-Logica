#include <iostream>
using namespace std;

int main(){
    int r[2], c[2];
    
    for(int i = 0 ; i < 2 ; i++){
        cout << "Type the number of rows in the array [" << i + 1 << "]: ";
        cin >> r[i];
        cout << "Type the number of columns in the array [" << i + 1 << "]: ";
        cin >> c[i];
    }

    int *array1 = new int[r[0]][c[0]];
    int *array2 = new int[r[1]][c[1]];

    cout << endl << "--- Array 1 ---" << endl;
    for(int i = 0; i < r[0]; i++){
        for(int j = 0; j < c[0]; j++){
            cout << "Type a number for position [" << i << "][" << j << "] for the array [1]: ";
            cin >> array1[i][j];
        } 
    }

    cout << endl << "--- Array 2 ---" << endl;
    for(int i = 0; i < dimension[1][0]; i++){
        for(int j = 0; j < dimension[1][1]; j++){
            cout << "Type a number for position [" << i << "][" << j << "] for the array [2]: ";
            cin >> array2[i][j];
        }
    }
 
    return 0;
}