#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main(){

    int n, x;
    bool exista=0;

    cin>>n;

    while(fin>>x){
        if(n%x==0) cout<<x<<" ";
    }

    if(!exista) cout<<"NU EXISTA";

    return 0;
}