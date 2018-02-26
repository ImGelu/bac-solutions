#include <iostream>
#include <algorithm>

using namespace std;

int sum(int x){
    int s=0;
    for(int i=2; i<=x/2; i++)
        if(x%i==0) s+=i;

    return s;
}

int main(){

    int n, a[100], x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        a[i]=sum(x);
    }

    sort(a, a+n+1);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}