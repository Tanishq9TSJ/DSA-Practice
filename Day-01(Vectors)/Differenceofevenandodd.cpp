//Find the difference between the sum of elements at even 
//indices to the sum of elements at odd indices
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int array[7] = {40,50,60,34,56,23,78};

    int anssum = 0;
    for(int i=0;i<7;i++)
    {
        if(i%2==0)
        {
            anssum += array[i];
        }
        else{
            anssum -= array[i];
        }
    }

    cout << anssum << endl;
    return 0;
}