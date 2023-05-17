//Find sum of all elements of an array
#include <iostream>
using namespace std;

int main()
{
    int A[5] = {2,4,6,8,10};

    int Length = sizeof(A) / sizeof(int);
    int sum = 0;

    for(int i =0; i < Length; i++)
    {
        sum += A[i];
    }

    cout << "Sum is " << sum << endl;
    return 0;
}