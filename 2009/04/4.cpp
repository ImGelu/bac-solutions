#include <iostream>

using namespace std;

int cif(int a, int b){
    int k=0;
    while(a){
        if(a%10==b) k++;
        a/=10;
    }
    return k;
}

int main(){

    int n, nr=0;

    cin>>n;

    for(int i=1; i<=9; i=i+2)
        for(int j=1; j<=cif(n, i); j++)
            nr=nr*10+i;

    cout<<nr;

    return 0;
}