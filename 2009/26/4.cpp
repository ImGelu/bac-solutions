#include <iostream>

using namespace std;

void sterge(int v[100], int &n, int i){
    for(int j=1; j<=n; j++)
        if(v[j]==i){
            for(int z=j; z<n; z++) v[z]=v[z+1];
            n--;
        }

}

int main(){

    int n, i, v[100];
    bool exista=1;

    cin>>n;

    for(int j=1; j<=n; j++) cin>>v[j];

    while(exista){
        exista=0;
        for(int j=1; j<n; j++)
            if(v[j]==v[j+1]){
                exista=1;
                sterge(v, n, v[j+1]);
            }
    }

    for(int j=1; j<=n; j++) cout<<v[j]<<" ";

    return 0;
}