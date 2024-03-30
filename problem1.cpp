

#include <iostream>
using namespace std;
double fun(int a){
    if(a==1){
        return 4;
    }
    return 0.5*fun(a-1)-1;
}


int main() {
    cout<<fun(10)<<endl;
    return 0;
}
