#include <iostream>

using namespace std;

int diviz(int n, int a[202]){
    int k=0;

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]%a[j]==0 || a[j]%a[i]==0) k++;

    return k;
}

int main(){

    int n, a[202];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    cout<<diviz(n, a);

    return 0;
}