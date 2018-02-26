#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int fr[10000];

int main(){

    int x, k;

    while(fin>>x) fr[x]++;

    cin>>k;

    while(fr[k]==0 && k<10000) k++;

    if(k!=10000) cout<<k<<" "<<fr[k];
    else cout<<0;

    return 0;
}