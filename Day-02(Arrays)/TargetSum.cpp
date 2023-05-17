//Find the total number of pairs in the array whose sum is
//equal to the given value x.
#include <iostream>
using namespace std;

int main()
{
    int A[] = {3,4,6,7,1};
    int targetsum = 7;
    int pairs = 0;

    int length = sizeof(A)/sizeof(int);

    for(int i =0;i< length;i++){
        for(int j=i+1;j<length;j++){
            if(A[i]+A[j] == targetsum){
                pairs++;
            }
        }
    }

    cout << "Number of pairs: "<<pairs;
}