#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int *aptr; // initialising a pointer
    aptr = &a; //puttine the address of a in aptr using '&' operator

    cout<<a<<endl;
    cout<<aptr<<endl;  //gives the address of 'a' variable
    cout<<&a<<endl;  //the '&' operator gives the address of that variable
    cout<<*aptr<<endl;  //we are accessijg the variable 'a' or in other words derefrencing

    *aptr = 40; //changing the value of 'a' variable through pointers
    cout<<a<<endl;
    cout<<*aptr<<endl;

                //  POINTER AIRTHMETIC
    int b = 20;
    int* bptr = &b;

    cout<<bptr<<endl;
    bptr++;
    cout<<bptr<<endl;   //the diff. between address of them is of 4 in hexa decimal bec. int is of 4 bytes;

    char c = 'a';
    char* cptr = &c;

    cout<<cptr<<endl;
    cptr++;
    cout<<cptr<<endl;

    return 0;
}