//Count the number of occurences of a particular element x.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);

    //taking values of array
    for(int i=0;i<6;i++)
    {
        cin>>v[i];
    }

    cout<<"Enter x: ";
    int x;
    cin>>x;

    //Code
    int occurence = 0;
    for(int i=0;i<v.size();i++)
    {  
        if(v[i]==x){
            occurence++;
        }
    }

    cout << "The number of occurences of "<<x<<" is " << occurence<<endl;
    return 0;
}