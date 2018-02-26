#include <iostream>

using namespace std;

int main(){
    
    int x, k=0;
    
    while(cin>>x){
        cout<<x<<" ";
        k++;
        if(k%5==0) cout<<endl;
    }

    return 0;
}