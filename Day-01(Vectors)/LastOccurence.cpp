//Find the last occurence of an element x in an given array

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

    int occurence = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence=i;
        }
    }

    cout << "The last occurence of "<<x<<" is " << occurence+1<<endl;
    return 0;
}
