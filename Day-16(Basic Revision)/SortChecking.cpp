#include <iostream>
using namespace std;

int main()
{
    int a[6];

    int n = sizeof(a)/sizeof(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cout << a[i] <<" ";
    }cout<<endl;

    bool sort = true;
    for(int i=1;i<n;i++){
        if(a[i]<=a[i-1]){
            sort = false;
        }
    }

    cout << "Sort: "<< sort << endl;
    return 0;
}