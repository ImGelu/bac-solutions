#include <iostream>

using namespace std;

int main(){

    int x, maxPrec=-1, maxActual=-1;

    while(cin>>x){
        if(x>maxPrec) maxPrec=x;
        if(x>maxActual){
            maxPrec=maxActual;
            maxActual=x;
        }
    }

    cout<<(maxPrec%10*maxActual%10)%10;

    return 0;
}