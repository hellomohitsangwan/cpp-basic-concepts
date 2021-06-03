#include<iostream>
using namespace std;

int main() {
    int f [26];
    int n; cin>>n;
    int a[n];

    for(int i = 0 ; i <  n ; i++) {
        cin>>a[i];
    }
    for(int i = 0 ; i < n ; i++) {
        f[a[i] - 'a']++;
    }
    for(int i = 0; i < 26 ; i++) {
        cout<<f[i]<<" ";
    }

    return 0;
}