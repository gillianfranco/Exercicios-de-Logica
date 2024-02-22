#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int gastos[5];
    int total = 0;
    int qtde, media;
    bool verificacao;

    for(int i = 0; i < 5; i++){
        cout << "Type the spent money of family [" << i + 1 << "]: ";
        cin >> gastos[i];
    }

    qtde = sizeof(gastos) / sizeof(int);
    for(int i = 0; i < qtde; i++){
        total += gastos[i];
    }

    media = total / qtde;
    cout << endl << "The arithmetic average of the expenses of the five families is " << media << "\n\n";

    for(int i = 0; i < qtde; i++){
        verificacao = false;
        verificacao = (gastos[i] >= media) ? true : false;
        if(verificacao)
            cout << "The family [" << i + 1 << "] is above of the average! Their expenses were " << gastos[i] << endl;
        else
            cout << "The family [" << i + 1 << "] is under of the average! Their expenses were " << gastos[i] << endl;
    }

    system("pause >> NULL");

    return 0;
}