#include<iostream>
using namespace std;

//swap 2 numbers
void swap(int a , int b) {
     a = a^b;
     b = a^b;    
     a = a^b;
    cout<<a<<" "<<b<<endl;
}

//check whether a number is odd or even
string oe(int a) {
    if(a & 1 == 1) {
        return "odd number";
    }
    return "even number";
}

int numberOfBits(int n) {
    //long method
    int count = 0;
    while (1)
    {
        if(n & 1 == 1){
            count++;
        }
        n = n>>1;
        if(n == 0){
            break;
        }
    }
    return count + 1;
}

int main() {
    swap( 5, 7);
    cout<<oe(6)<<endl;
    cout<<numberOfBits(7);
}