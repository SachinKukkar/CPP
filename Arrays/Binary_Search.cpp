#include <iostream>

using namespace std;

int BinarySearch(int arr[] , int n , int x) {

    int s = 0 ;
    int e = n-1;
    while(s<=e) {
        int mid = s+(e-s)/2;
        if(arr[mid]==x) {
            return mid;
        }
        else if(arr[mid]<x) {
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main() {
    
    int arr[]={1,2,3,4,5,6,7,8,9,12,14,64};
    int n = sizeof(arr)/sizeof(int);
    cout<<BinarySearch(arr,n,6);
    return 0;
}