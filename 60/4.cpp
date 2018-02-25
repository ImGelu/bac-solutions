#include <iostream>

using namespace std;

int radical(int a, int &x){
    x=1;

    while(x*x<=a && (x+1)*(x+1)<=a) x++;
}

int main(){

    int n, x;

    cin>>n;

    radical(n, x);
    
    if(x*x==n) cout<<"DA";
    else cout<<"NU";

    return 0;
}