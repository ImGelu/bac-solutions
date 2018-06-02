#include <iostream>

using namespace std;

int main(){

    int a[10][7], s=0;

    for(int i=1; i<=10; i++){
        for(int j=1; j<=7; j++){
            cin>>a[i][j];
            if(i==1 || j==1 || i==10 || j==7) s+=a[i][j];
        }
    }

    cout<<s;

    return 0;
}