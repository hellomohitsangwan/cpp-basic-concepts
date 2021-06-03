#include<iostream>
using namespace std;

int main() {
    
    int r , c; cin>>r>>c;
    int a[r][c];

    for(int i = 0 ;i < r ; i++) {
        for(int j = 0 ; j < c ; j++) {
            cin>>a[i][j];
        }
    } 

    //printing in circular order;
    int rs = 0;
    int cs = 0;
    int re = r-1;
    int ce = c-1;
    while(rs <= re && cs <= ce) {
        //first row
        for(int i = cs ; i <= ce ; i++) {
            cout<<a[rs][i]<<" ";
        }
        rs++;

        //column end;
        for(int i = rs ; i <= re ; i++) {
            cout<<a[i][ce]<<" ";
        }
        ce--;

        //row end;
        for(int i = ce; i >= cs ; i--) {
            cout<<a[re][i]<<" ";
        }
        re--;

        //column start;
        for(int i = re ; i >= rs ; i--) {
            cout<<a[i][cs]<<" ";
        }
        cs++;
    }


    return 0;
}