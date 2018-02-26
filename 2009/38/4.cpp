#include <iostream>

using namespace std;

void inter(int &x, int &y){ swap(x, y); }

int main(){

    int n, a[1000];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]>a[j]) inter(a[i], a[j]);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}