#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt")

int fr[100];

int main(){

    int k, x;

    while(fin>>x) fr[x]++;

    cin>>k;

    for(int i=k; i<=99; i++)
        if(fr[i]) cout<<i<<" ";

    return 0;
}