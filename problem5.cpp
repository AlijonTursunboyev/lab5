

#include<iostream>
using namespace std;


int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
 int main(){
    int n;
    cin>> n;
    for(int i=n;i>=0;i--){
        cout<< fib(i)<<" ";
    }
    return 0;
}
