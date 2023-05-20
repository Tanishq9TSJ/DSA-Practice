//Given Q queries, check if the given number is present 
//in the given array or not.
//Note: Value of all the elements in the array is less
//than 10 to power 5
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0;i < n; i++){
        cin >> v[i];
    }

    const int N = 1e5 + 10;
    vector<int> freq(N,0);
    for(int i =0;i<n;i++)
    {
        freq[v[i]]++;
    }

    cout << "Enter queries: ";
    int q;
    cin >> q;

    while(q--){
        int queryelement;
        cin >> queryelement;
        cout << freq[queryelement] << endl;
    }
}