#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the dimensions: ";
    cin>>m>>n;

    
    int **a = new int*[m];
    for(int i=0;i<m;i++){
        a[i]=new int[n];
    }

    cout<<"Enter the elements: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin>>a[i][j];
        }
    }

    int **t = new int*[n];
    for(int i=0;i<n;i++){
        t[i]=new int[m];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[n][m] == a[m][n];
        }
    }

     for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << t[i][j] << " ";
        }
        cout <<endl;
    }
    return 0;
}