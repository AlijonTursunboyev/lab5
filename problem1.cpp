#include <iostream>
using namespace std;
double function(int a) {
    if(a==1){
        return 4;
    }
    return 0.5*function(a-1)-1;
}


int main() {
    int n;
    cin>>n;
    cout<<function(n)<<endl;
    return 0;
}
