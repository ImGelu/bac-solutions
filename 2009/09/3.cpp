#include <iostream>

using namespace std;

void s1(int a[100], int &p, int &q){
        p=q=-1;

    for(int i=p; i<=q; i++)
        if(a[i]%2==0){p=i; break;}

    for(int i=q; i>=p; i--)
        if(a[i]%2!=0){q=i; break;}

}

void s2(int &a, int &b){ swap(a, b); }

int main(){

    int a[100], n, auxPar, auxImpar;

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++){
            auxPar=i, auxImpar=j;
            s1(a, auxPar, auxImpar);
            s2(a[auxPar], a[auxImpar]);
    }

    for(int i=0; i<n; i++) cout<<a[i]<<" ";

    return 0;
}