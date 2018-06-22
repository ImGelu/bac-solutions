#include <iostream>

using namespace std;

void Cifre(int n){
    int aux=n;

    for(int i=0; i<=9; i++){
        while(aux){
            if(aux%10==i){
                cout<<i<<" ";
                break;
            }
            aux/=10;
        }
        aux=n;
    }

}

int main()
{
    int n;

    cin>>n;

    Cifre(n);

    return 0;
}
