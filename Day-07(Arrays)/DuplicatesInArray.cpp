//Find duplicate elements and no of duplicate elements in an array
#include <iostream>
#include <vector>
using namespace std;

void Duplicates(vector<int> &v){
    int lastduplicate = 0;
    int count = 0;
    for(int i=0;i<v.size();i++){
        if(v[i] == v[i+1] && v[i] != lastduplicate){
            cout<<v[i] << " ";
            lastduplicate = v[i];
            count++;
        }
    }
    cout << endl << "count: " << count << endl;
    return;
}

void CountNoOfDuplicates(vector<int> &v)
{
    for(int i=0;i<v.size()-1;i++){
        if(v[i] == v[i+1]){
            int j = i+1;
            while(v[j] == v[i]){ j++; }
            cout << v[i] <<" is appearing " << j-i << " times"<< endl;
            i=j-1;
        }
    }
}

int main()
{
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    Duplicates(v);
    CountNoOfDuplicates(v);

    /*for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;*/
}
