#include<iostream>
using namespace std;

int bs(int a[] , int n , int num) {
    int s = 0;
    int e = n -1 ;

    while(s <= e) {
        int mid = s+e / 2;
        if(a[mid] == num) {
            return mid;
        }
        else {
             if(a[mid] > num) {  //means elemetn is present in the first half
                e = mid - 1;
            }
             else{
                s = mid + 1;
            }
        } 
        }
    
    return -1;
}

int main() {

    int a[5] = {2 , 2 , 5, 6, 8};
    cout<<bs(a , 5 , 5);

    return 0;
}
