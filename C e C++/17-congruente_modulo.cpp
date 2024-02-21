#include <iostream>
using namespace std;

int main(){
    int n, j, m;

    cout << "Digite os valorres n, j e m: ";
    cin >> n >> j >> m;

    cout << "Os " << n << " primeiros numeros naturais congruentes a " << j << " modulo "<< m << " sao: ";
    for(int i = 0; n != 0; i++){
        if(i % m == j % m){
            cout << i;
            n--;
        }
    }
    cout << endl;

    return 0;
}