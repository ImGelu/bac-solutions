#include <iostream>

using namespace std;

void s1(int &a, int &b){
    swap(a, b);
}

int s2(int a[100], int p, int q){
    for(int i=p; i<=q; i++)
        if(a[i]%5==0) return i;

    return -1;
}

int main(){

    int a[100], n, i1=0, i2=0;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    i1=s2(a, 1, n);

    for(int i=1; i<=n; i++)
        if(a[i]%5==0) i2=s2(a, i, n);

    if(i1==-1 || i2==-1) cout<<0;
    else{
        swap(a[i1], a[i2]);
        for(int i=1; i<=n; i++) cout<<a[i]<<" ";
    }

    return 0;
}