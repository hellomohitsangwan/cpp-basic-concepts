#include<iostream>
using namespace std;

int gcd(int a , int b) {
    int x = (a>b) ? a : b;  //max
    int y = (a < b) ? a : b; //min

    while(y != 0) {
        int r = x%y;
        x = y;
        y = r;
    }
    return x;
}

bool armstrongNumber(int n) {
    int ans = 0;
    int orignalNumber = n;
    while(n != 0) {
        int ld = n % 10;
        ans = ans*10 + ld;
        n /= 10;
    }
    return orignalNumber == ans;
}
    int main() {
        cout<<"the gcd is"<<gcd(10 , 44)<<"\n"<<armstrongNumber(153);
}