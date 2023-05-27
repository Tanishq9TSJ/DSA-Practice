//Implement Binary Search
#include <iostream>
using namespace std;

int BinarySearch(int A[], int key, int l, int h)
{
    while(l <= h){
        int mid = l + (h-l)/2;
        if(A[mid] == key){
            return mid;
        }else if(key < A[mid]){
            h = mid - l;
        }else{
            l = mid + l;
        }
    }
    return -1;
}

int main()
{
    int A[] = {2,3,4,5,6,7,8,9};
    int key = 4;
    int n = sizeof(A)/sizeof(int);
    cout <<"Result: " << BinarySearch(A, key, 0, n-1);
    return 0;
}