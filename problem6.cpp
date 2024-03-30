#include <iostream>
using namespace std;
#include <string>

string isPalidrome(string n){
    string b;
    int len=n.length();
    for(int i=len-1;i>=0;i--){
        b=b+n[i];
    }
}



int main(){
    string n;
    cin>>n;
    if(isPalidrome(n)==n){
        cout<<1;
    }
    else
        cout<<0;

    return 0;
}
