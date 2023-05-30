//Program for Armstrong number
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,temp,rem,sum=0;
    cout <<"Enter the number: ";
    cin >> n;
    temp = n;
    while(temp>0)
    {
        rem = temp%10;
        temp = temp/10;
        sum = sum + ceil(pow(rem,3));  //pow() gives in double and our data is in int, ceil() converts double back to int
        
    }
    if(n==sum){
        cout << n <<" is an armstrong number";
    }
    else{
        cout << n <<" is not an armstrong number";
    }
    return 0;
}