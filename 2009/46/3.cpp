#include <iostream>

using namespace std;

int main(){

    int n, k, a[100], cnt=1, x, nrdiv=0;

    cin>>n>>k;

    for(int i=1; i<=n; i++){
        nrdiv=0;
        cin>>x;
        for(int j=2; j<=x/2; j++)
            if(x%j==0) nrdiv++;

        if(nrdiv>=k) a[cnt++]=x;

    }

    for(int i=1; i<cnt; i++) cout<<a[i]<<" ";

    return 0;
}