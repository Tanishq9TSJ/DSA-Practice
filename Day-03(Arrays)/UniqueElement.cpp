//Find the unique number in a given array where all the
//elements are being repeated twice with one value being
//unique.
#include <iostream>
using namespace std;

int main()
{
    int A[] = {2,3,1,3,2,4,1};
    int length = sizeof(A)/sizeof(int);

    //Pairs find karke unhe -1 assign kardenge
    for(int i=0; i < length; i++){
        for(int j = i+1; j < length; j++){
            if(A[i] == A[j]){
                A[i] = A[j] = -1;
            }
        }
    }

    //Joh element -1 se bada hoga wahi unique number hoga
    int unique = 0;
    for(int i =0; i < length; i++)
    {
        if(A[i] > 0){
            cout <<"Unique element is " << A[i];
            break;
        }
    }
    return 0;
}