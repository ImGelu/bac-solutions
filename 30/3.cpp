#include <iostream>

using namespace std;

int suma(int v[100], int n, int i, int j){
    int s=0;
    for(int z=1; z<i; z++) s+=v[z];
    for(int z=j+1; z<=n; z++) s+=v[z];

    return s;
}

int main(){

    int v[100], n, i, j;

    cin>>n>>i>>j;

    for(int z=1; z<=n; z++) cin>>v[i];

    cout<<suma(v, n, i, j);

    return 0;
}