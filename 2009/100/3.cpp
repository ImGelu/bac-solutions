#include <iostream>

using namespace std;

int divizor(int a, int b, int c){
    int minim=min(a, min(b, c)), k=0;

    for(int i=1; i<=minim/2; i++)
        if(a%i==0 && b%i==0 && c%i==0) k++;

    return k;
}

int main(){

    int a, b, c;

    cin>>a>>b>>c;

    cout<<divizor(a, b, c);

    return 0;
}