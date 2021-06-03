#include<iostream>
using namespace std;

int main() {
    int n1 , n2 , n3; cin>>n1>>n2>>n3;
    int a[n1][n2];
    int b[n2][n3];

    for(int i = 0 ; i < n1 ; i++) {
        for(int j = 0 ; j < n2; j++) {
            cin>>a[i][j];
        }
    }

    for(int i = 0 ; i < n2 ; i++) {
        for(int j = 0 ; j < n3; j++) {
            cin>>b[i][j];
        }
    }

    int c[n1][n3];
    for(int i = 0; i < n1 ; i++) {  //iteration into the rows of first matrix
        for(int j = 0 ; j < n3 ; j++) {  //iterating into the columnss of second matrix
            for(int k = 0 ; k < n2 ; k++) {  //loop for multiplication of rows of first with colimn of second matrix
                c[i][j] = a[i][k] * b[k][j];
            }
        }
    }
        for(int i = 0 ; i < n1 ; i++) {
           for(int j = 0 ; j < n3; j++) {
                cout<<c[i][j]<<" ";
            }
            cout<<"\n";
        }
}        