//Givrn an array of integers of size n. Answer q queries where
//you need to print the sum of values in a given range of indices
//from L to R(both included).
//Note:The values of L and R in queries follow 1-based indexing.
//***
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n+1,0);  //1-based indexing
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    //calculate prefix sum array
    for(int i=1;i<=n;i++){
        v[i] += v[i-1];
    }

    int q;
    cin>>"Enter the query ">>q;
    
    while(q--){
        int l,r;
        cin>>l>>r;

        int ans=0;
        ans = v[r] - v[l-1];
        cout<<ans<<endl;
    }
    return 0;
}