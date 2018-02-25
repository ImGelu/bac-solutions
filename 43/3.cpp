#include <iostream>

using namespace std;

int P(int n, int a[100]){
    int s=0;

    for(int i=1; i<=n; i++)
        if(a[i]%2!=0 && i%2==0) s+=a[i];

    return s;
}

int main(){

    int n, a[100];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    cout<<P(n, a);

    return 0;
}