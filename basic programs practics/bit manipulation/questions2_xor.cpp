#include<iostream>
using namespace std;



//find the one element which don't repeat in in an array where every other element repeats twice
int repeatOnceOne(int a[] , int length) {
    int number = 0;
    for (int i = 0; i < length; i++)
    {
        number = number^a[i];
    }
    return number;
}

int getBit(int n , int posn) {
    return (n&(1<<posn) != 0);
}
// //find the 2 elements which don't repeat in an array where every other element repeats twice
// void repeatOnceTwo(int a[] , int l) {
//     int xor = 0;
//     for (int i = 0; i < l; i++)
//     {
//         xor = xor^a[i];
//     }
//     int posnCount = 0;
//     int tempXor = xor;
//     while(1) {
//         if (getBit(xor , posnCount))
//         {
//             break;
//         }
//         xor = xor>>1;
//         posnCount++;
//     }
//     int newXor = 0;
//     for (int i = 0; i < l; i++)
//     {
//         if (getBit(a[i] , posnCount))
//         {
//             newXor = newXor^a[i];
//         }
        
//     }
//      cout<<newXor << endl << tempXor^newXor;
// }

int setBit(int n , int posn) {
    return (n | (1<<posn));
}

//find the element which don't repeat in an array where every other element repeats thrice or k times
int repeatOnceAllK (int a[] , int size) {
    int finalNumber = 0;
    for (int i = 0; i < 64; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if(getBit(a[j] , i)) {
                count++;
            }
        }
        if (count % 3 != 0)
        {
            finalNumber = setBit(finalNumber , i);
        }
        
    }
    return finalNumber;
}

int main() {
    int a[] = {1 , 1 ,3 , 3 , 2};
    int b[] = {1 , 1 , 1 , 2, 3 , 2 , 2 , 3,3,8};
    cout<<repeatOnceAllK(b , 10)<<endl;
    // cout<<repeatOnceOne(a , 5);
}