#include <iostream>

using namespace std;

int fr[500];

int main(){

    int x;

    while(cin>>x) fr[x]++;

    for(int i=500; i>=1; i--)
        if(fr[i]==1) cout<<i<<" ";

    return 0;
}