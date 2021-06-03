#include<iostream>
using namespace std;

void swapWithoutPointers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapWitPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
//  in functions we pass the value not the refrence 
int main() {
    int a = 10;
    int b = 20;

    swapWithoutPointers(a , b);
    cout<<a<<" "<<b;

    int *aptr = &a;
    int *bptr = &b;
    swapWitPointers(aptr , bptr);  //or instead of makig pointers we can just simply pass the address in the function as pointer,like= swap(&a , &b);
    cout<<" "<<a<<" "<<b;

    
    return 0;
}