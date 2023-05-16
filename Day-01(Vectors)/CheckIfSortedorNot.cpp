//Check if the given array is sorted or not
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);

    //Taking input
    for(int i=0;i<6;i++)
    {
        cin>>v[i];
    }

    //Traversing
    for(int i=0;i<v.size();i++)
    {
        cout << v[i]<<" ";
    }
    cout << endl;

    //Checking if it is sorted or not
    bool sort = true;
    for(int i =1;i<v.size();i++)
    {
        if(v[i]<=v[i-1])
        {
            sort = false;
        }
    }

    cout << sort << endl;
    return 0;

}