#include <iostream>

using namespace std;

bool f(int n, int a[202]){
    int maxim=a[1], minim=a[1];

    for(int i=2; i<=n; i++){
        if(a[i]>maxim) maxim=a[i];
        else if(a[i]<minim) minim=a[i];
    }

    if(maxim-minim>1000) return true;
    else return false;
}

int main(){

    int n, a[202];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    cout<<f(n, a);

    return 0;
}