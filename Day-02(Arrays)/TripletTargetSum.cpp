//Count the number of triplets whose sum is equal to the 
//given value x.
#include <iostream>
using namespace std;

int main()
{
    int A[] = {3,1,2,4,0,6};
    int targetsum=6;
    int length = sizeof(A)/sizeof(int);

    int count = 0;

    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            for(int k=j+1;k<length;k++){
                if(A[i]+A[j]+A[k] == targetsum){
                    count++;
                }
            }
        }
    }

    cout << "Number of triplets: " << count << endl;
}