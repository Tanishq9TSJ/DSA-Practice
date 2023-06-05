//Factorial program using recursion
#include <iostream>
using namespace std;

int fact(int n){
    if(n == 0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
int main()
{
    int n;
    cin>>n;

    int ans = fact(n);
    cout<<"Answer: "<< ans;
    return 0;
}