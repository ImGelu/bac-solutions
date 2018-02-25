#include <iostream>

using namespace std;

int fr[100];

int main(){

    int x;

    while(cin>>x) fr[x]++;

    for(int i=0; i<=99; i++)
        if(fr[i]>=2) cout<<i<<" ";

    return 0;
}