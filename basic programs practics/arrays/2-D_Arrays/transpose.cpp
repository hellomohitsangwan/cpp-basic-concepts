#include<iostream>
using namespace std;

int main() {
    int r , c; cin>>r>>c;
    int a[r][c];

    for(int i = 0 ; i < r ; i++) {
        for(int j = 0 ; j < c; j++) {
            cin>>a[i][j];
        }
    }

    //transpose
    for(int i = 0 ; i < r ; i++) {
        for(int j = i ; j < c ; j++) {  //we are only swaping the upper traingular element of the matries,bec. if we do all the it will return the same matrices bec. one element swaps 2 times
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for(int i = 0 ; i < r ; i++) {
        for(int j = 0 ; j < c ; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}