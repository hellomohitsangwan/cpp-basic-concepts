#include<iostream>
using namespace std;

int main() {
    int n1 , n2; cin>>n1>>n2;
    int n; cin>>n;

    int a[n1][n2];

    for(int i = 0 ; i < n1 ; i++) {
        for(int j = 0 ; j < n2; j++) {
            cin>>a[i][j];
        }
    }

    int r = 0 , c = n2 - 1;
    bool isFound = false;
    while(r < n1 && c >= 0) {
        if(a[r][c] == n) {
            isFound = true;
        }
        if(a[r][c] > n) {
            c--;
        }
        else{
            r++;
        }
    }

    if(isFound == true) {
        cout<<"is present";
    }
    else{
        cout<<"not present";
    }
    return 0;

}