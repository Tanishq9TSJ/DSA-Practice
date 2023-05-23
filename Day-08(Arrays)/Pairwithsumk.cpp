//Find a pair of elements with sum k
#include <iostream>
#include <vector>
using namespace std;

void Pair(vector<int> &v, int k)
{
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i] + v[j] == k){
                cout << v[i]<<" + "<<v[j]<<" = "<<k<<endl;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int k;
    cin>>k;

    Pair(v,k);    
}