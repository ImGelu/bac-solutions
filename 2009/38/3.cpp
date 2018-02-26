#include <iostream>

using namespace std;

void Del(int &x, int y){
    int rez=0, p=1;

    while(x){
        if(x%10<=y){
            rez=rez+(x%10)*p;
            p=p*10;
        }
        x/=10;
    }
    if(!rez) x=-1;
    else x=rez;
}

int main(){

    int x, y;

    cin>>x>>y;

    Del(x, y);
    
    cout<<x;
    
    return 0;
}