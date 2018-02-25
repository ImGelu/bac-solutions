#include <iostream>

using namespace std;

int fr[10];

int main(){

    int x;

    while(cin>>x) fr[x]++;

    for(int i=0; i<=9; i++)
        for(int j=1; j<=fr[i]; j++)
            cout<<i<<" ";

    return 0;
}