#include<iostream>
using namespace std;

void e1() {
    int i = 1;

    //  1      3
    i = i++ + ++i;  //i++ will increment its value after the statement not at the same moment
    cout<<i<<endl;
}
void e2() {
    int i = 1 , j = 2 , k;
    
      //1   2   1     2     3     4
    k = i + j + i++ + j++ + ++i + ++j;

    cout<<i<<" "<<j<<" "<<" "<<k<<endl;

}
void e3 () {
    int i = 0;

      //0      0     1     1
    i = i++ - --i + ++i - i--;

    cout<<i<<endl;
}
void e4() {
    int i = 1, j = 2, k = 3;

          //1     2     3
    int m = i-- - j-- - k--;

    cout<<i<<" "<<j<<" "<<k<<" "<<m<<endl;
}
void e5() {
    int i = 10 , j = 20 , k;

      //10     9     19   20    9    20     10     19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout<<i<<" "<<j<<" "<<k<<endl;

}
int main() {
    e1();
    e2();
    e3();
    e4();
    e5();
}