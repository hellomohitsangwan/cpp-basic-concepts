#include<iostream>
using namespace std;

int main() {
    // of 3 numbers
    int a , b , c;
    cin >> a >> b >> c;
    if(a>b) {
        if(a>c){
            cout<<a;
        }
        else{
            cout<<c;
        }
    }
    else{
        if(b>c){
            cout<<b;
        }
        else{
            cout<<c;
        }
    }

    //calculator program using switch statement
    cout<<"enter the operator";
    char o; cin>>o;
    int d , e; cin>>d>>e;
    switch(o) {
        case '+' :
        cout<<d+e;
        break;  //if we don't uses break statement here,then it goes to next case automatically execute that case also whether it statisfies the condn. or not

        case '/' :
        cout<<d/e;
        break;

        default :
        cout<<"please wait for next operator";

    }
    
}
