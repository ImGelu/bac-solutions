#include <iostream>

using namespace std;

int fr[10];

int cifre(int a, int &b){
    
    for(int i=0; i<=9; i++) fr[i]=0;
    
    b=0;
    
    while(a){
        fr[a%10]++;
        a/=10;
    }

    for(int i=1; i<=9; i++)
        for(int j=1; j<=fr[i]; j++){
            if(b>0 && b<9)
                for(int z=1; z<=fr[0]; z++) b=b*10;

        b=b*10+i;
        }
}

int main(){

    int n, a, b;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a;
        cifre(a, b);
        if(a==b) cout<<a<<" ";
    }

    return 0;
}