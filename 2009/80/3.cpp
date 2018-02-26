#include <iostream>

using namespace std;

int main(){

    int n, pp=2, k=0;

    cin>>n;

    while(pp*pp<=n){
        if(n%(pp*pp)!=0){
            k++;
            cout<<pp*pp<<" ";
            if(k%5==0) cout<<endl;
        }
        pp++;
    }

    return 0;
}