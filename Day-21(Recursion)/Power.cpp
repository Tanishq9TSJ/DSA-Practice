//Power of number using recursion
#include <iostream>
using namespace std;

/*int pow(int m, int n){
    if(n == 0){
        return 1;
    }if(n%2 == 0){   // power is even
        return m*pow(m*m, n/2);
    }else{   // power is odd
        return m*pow(m*m, (n-1)/2);
    }
}*/

int pow(int m, int n){
    if(n == 0){
        return 1;
    }
    else{
        return m*pow(m,n-1);
    }
}


int main(){
    int m,n;
    cin >> m >> n;

    int ans = pow(m,n);
    cout<<"Answer: " << ans;
    return 0;
}