#include<iostream>
#include<climits>
using namespace std;

int bruteForce(int a[] ,int n) {
    int maxSum = 0;
    for(int i = 0 ; i < n ; i++) {
        int sum = a[i];
        for(int j = i+1 ; j < n ; j++) {
            sum += a[j];
            if(sum > maxSum) {
                maxSum = sum;
            }
        }
    }
    return maxSum;
}

int kadanesAlgo(int a[] , int n) {
    int maxSum = 0;
    int currentSum = 0;
    for(int i = 0 ; i < n ; i++) {
        currentSum += a[i];
        if(currentSum < 0) {
            currentSum = 0;
        }
        maxSum = max(currentSum , maxSum);
    }
    return maxSum;
}

int main(){
    int a[6] = {3 ,-2 ,24, -8 , 3 , -4};
    cout<<bruteForce(a , 6)<<"\n"<<kadanesAlgo(a , 6);

    return 0;
}