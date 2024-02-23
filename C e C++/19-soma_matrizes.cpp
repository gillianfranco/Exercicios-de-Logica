#include <iostream>
using namespace std;

int main(){
    int dimension[2][2];
    
    for(int i = 0 ; i < 2 ; i++){
        cout << "Type the number of rows in the array [" << i + 1 << "]: ";
        cin >> dimension[i][i];
        cout << "Type the number of columns in the array [" << i + 1 << "]: ";
        cin >> dimension[i][i+1];
    }

    int *array1 = new int[dimension[0][0]][dimension[0][1]];
    int *array2 = new int[dimension[1][0]][dimension[1][1]];

    cout << endl << "--- Array 1 ---" << endl;
    for(int i = 0; i < dimension[0][0]; i++){
        for(int j = 0; j < dimension[0][1]; j++){
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