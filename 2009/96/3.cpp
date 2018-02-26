#include <iostream>

using namespace std;

bool verif(int a, int b, int c){
    if(a<b+c && b<a+c && c<a+b) return 1;
    return 0;
}

int main(){

    int a, b, c, d, e, f;

    cin>>a>>b>>c>>d>>e>>f;

    if(verif(a, b, c) && verif(d, e, f)){
        if((a==d || a==e || a==f) && (b==d || b==e || b==f) && (c==d || c==e || c==f)) cout<<"congruente";
        else cout<<"necongruente";
    }
    else cout<<"nu";

    return 0;
}