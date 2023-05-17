//Search if a given element is present in the array or not 
//using linear search
#include <iostream>
using namespace std;

int main()
{
    int A[5] = {3,9,10,11,7};

    int Length = sizeof(A) / sizeof(int);
    int key = 3;
    int index = -1;

    for(int i = 0; i < Length; i++)
    {
        if(A[i] == key)
        {
            index = i;
            break;
        }
    }
    return -1;

    cout << "Key " << key << " is at index" << index << endl;
    return 0;
}