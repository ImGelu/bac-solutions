#include <iostream>

using namespace std;

int main(){

    int n, a, b, aMaxim=-1, bMaxim=-1, sMaxim=-1;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a>>b;
        if(b-a+1>sMaxim){
            sMaxim=b-a+1;
            aMaxim=a;
            bMaxim=b;
        }

        if(b-a+1==sMaxim)
            if(a<aMaxim) aMaxim=a, bMaxim=b;
    }

    cout<<aMaxim<<" "<<bMaxim;

    return 0;
}