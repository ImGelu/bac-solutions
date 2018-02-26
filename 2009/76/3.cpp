#include <iostream>

using namespace std;

void s(int n, int c, int &k){
    k=0;
    while(n){
        if(n%10>=c-1 && n%10<=c+1) k++;
        n/=10;
    }
}

int main(){

    int n, c, k;

    cin>>n>>c;

    s(n, c, k);

    cout<<k;

    return 0;
}