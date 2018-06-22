#include <iostream>

using namespace std;

int sub(int n, int a[100], int k){
    int s=0;
    for(int i=1; i<=n, k>0; i++){
        if(a[i]%2!=0){
            s+=a[i];
            k--;
        }
    }

    if(s==0) return -1;
    else return s;
}

int main()
{
    int n, a[100], k;

    cin>>n>>k;

    for(int i=1; i<=n; i++) cin>>a[i];

    cout<<sub(n, a, k);

    return 0;
}
