#include <iostream>

using namespace std;

int fr[100];

int main(){

    int n, m, x, k=0, s=0;

    cin>>n>>m;

    for(int i=1; i<=n; i++){
        cin>>x;
        fr[x]++;
    }

    for(int i=99; i>=0; i--)
        if(fr[i] && k<m){
            k++;
            s+=i;
        }

    cout<<s;

    return 0;
}