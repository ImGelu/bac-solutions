#include <iostream>

using namespace std;

int f(int n, int a[202]){
    int poz=0, neg=0, nul=0;

    for(int i=1; i<=n; i++)
        if(a[i]>0) poz++;
        else if(a[i]<0) neg++;
        else nul++;

    if(neg>poz) return -1;
    else if(neg==poz) return 0;
    else return 1;
}

int main(){

    int n, a[202];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    cout<<f(n, a);

    return 0;
}