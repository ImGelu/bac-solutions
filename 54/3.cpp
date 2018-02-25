#include <iostream>

using namespace std;

void pal(int a, int &b){
    int next=a, prev=a, inv=0, aux;
    bool isPal=0;

    while(!isPal){
        inv=0;
        aux=prev;
        while(aux){
            inv=inv*10+aux%10;
            aux/=10;
        }
        if(inv==prev) isPal=1;
        else prev--;
    }
    
    isPal=0;
    
    while(!isPal){
        inv=0;
        aux=next;
        while(aux){
            inv=inv*10+aux%10;
            aux/=10;
        }
        if(inv==next) isPal=1;
        else next++;
    }
    
    if(next-a==a-prev) b=prev;
    else if(next-a<a-prev) b=next;
    else b=prev;
}

int main(){

    int n, x, y;

    cin>>n;
    
    for(int i=1; i<=n; i++){
        cin>>x;
        pal(x, y);
        cout<<y<<" ";
    }

    return 0;
}