#include <iostream>

using namespace std;

int main(){

    int n, x, maxim=-1, minim=10;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(x%2==0 && x>maxim) maxim=x;
        if(x%2!=0 && x<minim) minim=x;
    }

    cout<<maxim<<' '<<minim;

    return 0;
}