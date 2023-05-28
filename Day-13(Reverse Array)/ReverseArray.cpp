//Reverse the array
#include <iostream>
using namespace std;

void reverse(int A[],int length){
    for(int i=0,j=length-1; i<j; i++,j--){
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    return;
}
int main()
{
    int A[] = {1,2,3,4,5,6,7};
    int n = sizeof(A) / sizeof(int);
    //cout << A[0];
    reverse(A,n);

    for(int i = 0; i < n;i++)
    {
        cout<<A[i]<<" ";
    };
    return 0;
}