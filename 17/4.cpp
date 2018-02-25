#include <iostream>

using namespace std;

int main(){

    int k=0, s=0, x;
    
    while(cin>>x){
        if(x>0){
            s+=x;
            k++;
        }
    }
    
    cout<<(double)s/k;
    
    return 0;
}