#include <iostream>

using namespace std;

int divizor(int a, int &d){
    d=a-1;
    while(a%d!=0) d--;
}

int main(){

    int x, d;

    cin>>x;
    
    divizor(x, d);
    
    if(d==1) cout<<"DA";
    else cout<<"NU";

    return 0;
}