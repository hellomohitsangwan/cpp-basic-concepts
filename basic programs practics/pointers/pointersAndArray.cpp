#include<iostream>
using namespace std;

int main() {
    int a[] = {1 ,2 ,3 ,4};

    cout<<a<<endl; //isme already he a k 0t element ka address store hai hame alag '&' operator ka use nhu krna to store the address first
    cout<<*a<<endl;  //gives the value

    int* ptr = a;

// method 1
    for(int i = 0 ; i < 4 ; i++) {
        cout<<*ptr<<" ";  //first print the 0th element of the array and then we are incrmentinh the ptr location using the poiter airthmetic
        ptr++;
    }
    //method 1.1
    // for(int i = 0 ; i < 4 ; i++) {
    //     cout<<*a<<" "; 
    //   a++; //illegeal way don't do it like this,but why????
    // }

    //method 2
    for(int i = 0 ; i < 4 ; i++) {
        cout<<*(a + i)<<"  "; //the 'a' is indexing pointer so when we do +1 in it so it goes to next index na k next memory location pr
         //isilie hamne (a+4i) k (a+i) kiya 
    }


    //pointer to pointer
    int  b= 10;
    int *bptr = &b;
    cout<<*bptr<<endl;

    int **bpptr = &bptr;  //passing a pointer to a pointer
    cout<<*bpptr<<" ";  //just de refencing it one time so it will print the value of bptr
    cout<<**bpptr;   //just derefrencing it 2 times so it goes to b from bptr and the value of b
}

