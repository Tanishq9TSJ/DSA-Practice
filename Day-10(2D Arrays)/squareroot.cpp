//find the sqaure root of any number
#include <iostream>
using namespace std;

int SquareRoot(int x)
{
    int i = 1;
    while(i*i <= x){
        i++;
    }
    return i-1;
}

int main()
{
    int x;
    cin >> x;

    cout<<SquareRoot(x);
    return 0;
}