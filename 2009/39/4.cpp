#include <iostream>

using namespace std;

bool prim(int a){
    if(a<2) return false;
    if(a==2) return true;
    if(a%2==0) return false;
    for(int i=3; i<=a/2; i+=2)
        if(a%i==0) return false;

    return true;
}

int main(){

    int n;

    cin>>n;

    while(n>99){
        n/=10;
        if(prim(n)) cout<<n<<" ";
    }

    return 0;
}