
// pascal triangle:
// 1
// 11
// 121
// 1331
// 14541
#include<iostream>
using namespace std;

int factorial(int n) {
      int f = 1;
      for(int i = 1 ; i <= n ; i++) {
          f *= i;
      }
      return f;
}
void pascal(int r) {
    for(int i = 0; i < r ; i++) {
        for(int j = 0; j <= i ; j++) {
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    }
}
int main() {
    // cout<<factorial(5);
    pascal(5);
}