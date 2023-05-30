//Prime Number
#include <iostream>
using namespace std;

int main()
{
    int n,i,count=0;

    cout <<"Enter the number: ";
    cin >> n;

    if(n==1)
    {
        cout<<"Not a prime";
        return 0;
    }

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        cout<<"Number is prime";
    }
    else{
        cout<<"Not a prime";
    }
}