#include <iostream>

using namespace std;

int sub(int n){
    if(n<=5) return n;
    else return 2*sub(n-1);
}

int main(){

    int n, rez=0, k=1;

    cin>>n;

    while(sub(k)<=n) rez=sub(k++);

    cout<<rez;

    return 0;
}