#include<iostream>
using namespace std;

void fib(int n) {
    int first = 0;
    int second = 1;
    int sum;
    for(int i = 1 ; i <= n ; i++) {
        cout<<first<<" ";
        sum = first + second;
        first = second;
        second = sum;
    }
}
int main() {

    fib(8);
    return 0;
}