#include <iostream>
using namespace std;

int main(){
    int a[6];

    int n = sizeof(a)/sizeof(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cout << a[i] <<" ";
    }cout<<endl;

    cout<<"Enter x: ";
    int x;
    cin>>x;

    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            count++;
        }
    }

    cout << "The number of occurences of "<<x<<" is " << count<<endl;
    return 0;
}