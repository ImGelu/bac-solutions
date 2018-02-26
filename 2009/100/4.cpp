#include <iostream>

using namespace std;

int main(){

    int x, i=0, imparNou, imparPrecedent, iPrecedent, iActual;

    while(cin>>x){
        i++;
        if(x%2==1){
            imparPrecedent=imparNou;
            iPrecedent=iActual;

            imparNou=x;
            iActual=i;
        }
    }

    cout<<imparPrecedent<<" "<<iPrecedent;

    return 0;
}