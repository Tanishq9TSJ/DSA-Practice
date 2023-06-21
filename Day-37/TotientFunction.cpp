#include <iostream>
using namespace std;

static int Totient(int n){
    int result = n;
    for(int p=2;p*p <= n; ++p)
    {
        if(n%p == 0)
        {
            //find factors
            while(n%p == 0)
            {
                n /= p;
            }
            result -= result/p;
        }  
    }
    if(n > 1){
            result -= result/n;
        }
        return result;
}

int main(){
    cout<<Totient(40);
    return 0;
}