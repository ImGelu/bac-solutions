#include <iostream>

using namespace std;

void P(int a[100], int k, int &max){
    max=a[1];
    for(int i=1; i<=k; i++)
        if(a[i]>max) max=a[i];
}

int main(){

    int n, max, a[100];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++){
        P(a, i, max);
        a[i]=max;
    }

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";
    return 0;
}