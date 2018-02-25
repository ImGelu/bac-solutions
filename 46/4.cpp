#include <iostream>

using namespace std;

void cifre(int nr, int &nc, int &sc){
    nc=sc=0;
    
    do{
        sc+=nr%10;
        nc++;
        nr/=10;
    } while(nr);
}

int main(){

    int nr, nc, sc;
    
    cin>>nr;
    
    cifre(nr, nc, sc);
    
    cout<<nc<<" "<<sc;
    
    return 0;
}