#include <iostream>

using namespace std;

int sub(int v[100], int n, int a){

    int k=0;

    for(int i=1; i<=n; i++)
        if(v[i]==a) k++;

    return k;
}

int main(){

    bool dis=1;
    int v[100], n, a;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>v[i];

    for(int i=1; i<=n; i++)
        if(sub(v, i, v[i])==0){
            dis=0;
            break;
        }
    if(dis==0) cout<<"NU";
    else cout<<"DA";

    return 0;
}