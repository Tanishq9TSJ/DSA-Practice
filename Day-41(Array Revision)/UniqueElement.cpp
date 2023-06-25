#include <iostream>
using namespace std;

int main()
{
    int A[] = {2,3,1,3,2,4,1};
    int length = sizeof(A)/sizeof(int);

    for(int i=0; i < length; i++){
        for(int j = i+1; j < length; j++){
            if(A[i] == A[j]){
                A[i] = A[j] = -1;
            }
        }
    }
    
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