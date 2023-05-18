//Find second largest element in a given array 

#include <iostream>
#include <climits>
using namespace std;

int largestelementindex(int A[], int size){
    int max = INT_MIN;
    int maxindex = -1;
    for(int i =0;i<size;i++){
        if(A[i] > max){
            max = A[i];
            maxindex = i;
        }
    }
    return maxindex;
}

int main()
{
    int A[] = {2,3,5,7,6,1, 7};
    int length = sizeof(A)/sizeof(int);

    int indexoflargest = largestelementindex(A, length);
    int largestnum = A[indexoflargest];

    for(int i = 0; i < length;i++)
    {
        if(A[i] == largestnum){
            A[i] = -1;
        }
    }
    
    int indexofSecondlargest = largestelementindex(A, length);

    cout << A[indexofSecondlargest] << endl;
    return 0;
}