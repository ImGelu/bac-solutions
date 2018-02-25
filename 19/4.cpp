#include <iostream>

using namespace std;

int main(){
    
    int k=0;
    double x;

    while(cin>>x)
        if((int)x==x) k++;
    
    if(k>=10) cout<<"DA";
    else cout<<"NU";
    
    return 0;
}