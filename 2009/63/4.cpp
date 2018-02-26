#include <iostream>

using namespace std;

int main(){

    int x, a[1000], n=0, k=0;

    while(cin>>x) a[++n]=x;

    for(int i=2; i<n; i++)
        if(a[i]<a[i-1]+a[i+1]) k++;

    cout<<k;

    return 0;
}