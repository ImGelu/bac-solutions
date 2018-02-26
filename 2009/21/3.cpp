#include <iostream>

using namespace std;

int i_prim(int n){
    int urmatorulPrim=n, ultimulPrim=n;
    bool gasitUrmatorul=0, gasitUltimul=0;

    while(!gasitUrmatorul){
        gasitUrmatorul=1;
        for(int i=2; i<=urmatorulPrim/2; i++)
            if(urmatorulPrim%i==0) gasitUrmatorul=0;

        if(!gasitUrmatorul) urmatorulPrim++;
    }

    while(!gasitUltimul){
        gasitUltimul=1;
        for(int i=2; i<=ultimulPrim/2; i++)
            if(ultimulPrim%i==0) gasitUltimul=0;

        if(!gasitUltimul) ultimulPrim--;
    }

    return urmatorulPrim-ultimulPrim;

}

int main(){

    int n;

    cin>>n;

    cout<<i_prim(n);

    return 0;
}