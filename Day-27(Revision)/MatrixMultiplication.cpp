#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m1,n1,m2,n2;
    
    cout<<"Enter the dimension of first matrix: ";
    cin >> m1 >>n1;

    int **a = new int*[m1];
    for(int i=0;i<m1;i++){
        a[i]=new int[n1];
    }

    // Accessing elements of 1st matrix
    cout<<"Enter the elements of first matrix: ";
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            cin>>a[i][j];
        }
    }

    cout<<"Enter the dimension of the second matrix: ";
    cin >> m2 >>n2;

    int **b = new int*[m2];
    for(int i=0;i<m2;i++){
        b[i]=new int[n2];
    }

    // Accessing elements of 2nd matrix
    cout<<"Enter the elements of second matrix: ";
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            cin>>b[i][j];
        }
    }

    // Printing the 2D array
    cout<<"First matrix: "<<endl;
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            cout << a[i][j] << " ";
        }
        cout <<endl;
    }

    cout<<"Second matrix: "<<endl;
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            cout << b[i][j] << " ";
        }
        cout <<endl;
    }

    //checking if the matrices can multiply or not
    if(n1 != m2){
        cout<<"Matrix multiplication is not possible!";
        return 0;
    }
    else{
        int **c = new int*[m1];
        for (int i = 0; i < m1; i++) {
            c[i] = new int[n2];
        }

        for(int i=0;i<m1;i++){
            for(int j=0;j<n2;j++){
                c[i][j] = 0;
                for(int k=0;k<m2;k++){
                    c[i][j] += a[i][k]*b[k][j];
                }
                //cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"Result matrix: "<<endl;
        for (int i = 0; i < m1; i++) {
            for (int j = 0; j < n2; j++) {
                cout << c[i][j] << " ";
            }
            cout <<endl;
        }
    }
    return 0;
}