//Print array recursively
#include <iostream>
using namespace std;

void F(int A[], int i, int n){
    if(i == n){
        return;
    }
    cout<<A[i]<<" ";
    F(A,i+1,n);
}
int main(){
    int A[] = {1,2,3,4,5,6};
    int n = sizeof(A)/sizeof(int);

    F(A,0,n);
    return 0;
}