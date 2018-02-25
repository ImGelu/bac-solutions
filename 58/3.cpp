#include <iostream>

using namespace std;

int main(){
    
    int x, minim1=10000, minim2=10000;
    
    cin>>x;
    
    while(cin>>x){
        if(x<minim1) minim1=x;
        if(x<minim2){
            minim1=minim2;
            minim2=x;
        }
    }
    
    cout<<minim2<<" "<<minim1;

    return 0;
}