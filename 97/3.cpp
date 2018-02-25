#include <iostream>

using namespace std;

int Suma(int x, int y, int &z){
    z=0;

    if(x>y) swap(x, y);

    for(int i=x; i<=y; i++)
        if(i%2==0) z+=i;
}

int main(){

    int x, y, z;

    cin>>x>>y;

    Suma(x, y, z);

    cout<<z;

    return 0;
}