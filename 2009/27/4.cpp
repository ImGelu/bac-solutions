#include <iostream>

using namespace std;

int main(){

    double nr;
    int n, x, y, primul=-1, ultimul;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>nr;
        if(primul==-1) primul=(int)nr;
        ultimul=(int)nr;
    }

    cout<<primul<<' '<<ultimul;

    return 0;
}