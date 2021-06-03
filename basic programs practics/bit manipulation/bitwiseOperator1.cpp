#include<iostream>
using namespace std;

// to get a bit at that position eg-4 = 0100 (in binary form)
//the pos. is 2(let's say) so the bit at that posn. is 1
int getBit(int n , int pos) {
    return ((n & (1 << pos)) != 0);
}

// set = 1 , unSet = 0 bit lagna hai hame us posn parr
// return kr dega hame vo number in decimal form
int setBit(int n , int pos) {
    return (n | ( 1<<pos ));
}

// ye hame us posn. pe bit clear krke de deta hai
// i.e. agar 1 hai to 0 kr dega aur agar 0 hai to 0 he rhene dega
int clearBit(int n , int pos) {
    int mask = ~(1<<pos);  //mask is just a naming conventiion
    return (n & mask);
}

//we have to update the bit at that posn. from the prev. value to the given value
int updateBit(int n , int pos , int value) {
    //step 1: clear the bit at that posn.
    int mask = ~(1<<pos);
    n = n & mask;

    //step 2: set the bit at that posn.
    return (n | (value<<pos));
}
int main() {
    cout<<getBit(5 , 2)<<endl;
    cout<<setBit(5 , 1)<<endl;
    cout<<clearBit(5 , 2)<<endl;
    cout<<updateBit(5 , 1 , 1);
}
