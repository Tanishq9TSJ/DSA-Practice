//Write nth fibonacci number using recursion
#include <iostream>
using namespace std;

int Fib(int n){
    if(n <= 1){
        return n;
    }else{
        return Fib(n-1) + Fib(n-2);
    }
}

int main(){
    int n;
    cin >> n;

    cout << Fib(n);
    return 0;    
}