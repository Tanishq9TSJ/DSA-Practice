//Find the minimum element of a given array
#include <iostream>
using namespace std;

int main()
{
    int A[5] = {34,56,3,4,23};

    int Length = sizeof(A) / sizeof(int);
    int min = A[0];

    for(int i = 0; i < Length; i++)
    {
        if(A[i] < min){
            min = A[i];
        }
    }

    cout << "Minimum " << min << endl;
    return 0;
}