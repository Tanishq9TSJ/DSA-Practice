//Find the maximum element of a given array
#include <iostream>
using namespace std;

int main()
{
    int A[5] = {34,56,3,4,23};

    int Length = sizeof(A) / sizeof(int);
    int max = A[0];

    for(int i = 0; i < Length; i++)
    {
        if(A[i] > max){
            max = A[i];
        }
    }

    cout << "Maximum " << max << endl;
    return 0;
}