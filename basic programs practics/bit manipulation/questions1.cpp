#include<iostream>
using namespace std;

//write a progrmam to check wether a number is power of 2 or not
bool isPowerOf2(int n) {

//if n and n-1 ka NOT agar 0 k equal aata hai to vo power of 2 hoga nhi to nhi hoga 
//ab agar vo 0 return kr ra hai to vo power hai pr hame us case true return krana hai i.e 1 so islie ham uska complement lere hai
    // return !(n & (n-1));

    // now a base case still left in the upper method that is 0 so for that we do the foll. correctiions
         return (n && !(n & (n-1)));
}

// find the number of ones in binary representation of number , eg:5 = 0101 , and = 2
// concept = the (n & (n-1)) and (n) has same number of bits except the rightmost set bit(the right most ones in the n becomes 0),so it have one bit less
// so we do (n & (n-1)) till the n becomes 0 i.e the number of ones becomes 0,and make count increase by one
int noOfBit(int n) {
    int count = 0;
    while ((n))
    {
        count++;
        n = n & (n-1);
    }
    return count;
    
}

void printAllSubsets(int a[] , int n) {
    // 1<<n == 2^n;
    //so there are (1<<n) subsets of n numbers.
    for(int i = 0 ; i < (1<<n); i++) {    //looop for all the subsets
        for(int j = 0 ; j < n; j++) {  //loop to iterate all the number in that particular set(particular row)
            if(i & (1<<j)) {  //getting the bit
                cout<<a[j]<<" ";
            }
            
        }
        cout<<endl;
    }
}
int main() {
    cout<<isPowerOf2(2)<<endl;
    cout<<noOfBit(5)<<endl;
    int a[] = {5 , 6, 7, 8};
    printAllSubsets(a , 4);
}