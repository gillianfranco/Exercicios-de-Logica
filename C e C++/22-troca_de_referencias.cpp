#include <iostream>
using namespace std;

int changeAddress(int ptr1, int ptr2){
    int oldAddress;
    oldAddress = ptr1;
    ptr1 = ptr2;
    ptr2 = oldAddress;
}

int main(){
    int a, b;
    a = 10;
    b = 17;

    int *ptr1 = &a;
    int *ptr2 = &b;

    changeAddress(ptr1, ptr2);

    return 0;
}