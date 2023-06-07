//Print maximum value of array using recursion
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int f(int *arr, int i, int n){
    if(i == n-1){
        return arr[i];
    }
    return max(arr[i], f(arr, i+1,n));
}

int main(){
    int A[] = {1,2,3,4,5,6};
    int n = sizeof(A)/sizeof(int);

    cout<<f(A,0,n);
    return 0;
}