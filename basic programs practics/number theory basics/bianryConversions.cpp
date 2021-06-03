#include<iostream>
using namespace std;

//binary to decimal  : 11010 = 0*2^0 + 1*2^1 + 0*2^2 + .. +1*2^4
int btd(int n) {
    int power = 1; //2^0
    int ans = 0;
    while (n > 0) {
        int lastDigit = n%10;
        ans += power*lastDigit;
        power *= 2;
        n /= 10;
    }
    return ans;  
}
int main() {

    //decimal to binary
    int n; cin>>n;
    int binary[32];

    int count = 0;
    while(n > 0) {
        int remainder = n%2;
        binary[count] = remainder;
        n = n/2;
        count++;
    }
    for(int i = count - 1; i >= 0 ; i--) {
        cout<<binary[i];
    }
    cout<<"\n"<<btd(110000);
}

