#include <iostream>
using namespace std;

int main()
{
    int A[] = {1,2,3,4,5};
    int k = 3;
    
    int n = 5;
    //int n = sizeof(A)/sizeof(int);

    //k can be greater than n
    k = k%n;

    int B[5];
    int j = 0;

    //inserting last k elements in B array
    for(int i=n-k;i<n;i++)
    {
        B[j++]=A[i];
    }

    //Inserting first n-k elements in B array
    for(int i=0;i<=k;i++)
    {
        B[j++]=A[i];
    }

    //Printing the answer
    for(int i=0;i<n;i++)
    {
        cout<<B[i]<<" ";
    }
    cout<<endl;

    return 0;
}