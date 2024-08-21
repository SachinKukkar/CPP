#include <iostream>

using namespace std;

void maxSumofSubArray(int *arr ,int n) {
    int maxSum = INT8_MIN;
    int currSum = 0 ;
    for(int i=0;i<n;i++) {
        currSum+=arr[i];
        maxSum = max(currSum , maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"The maximum sum is  : "<<maxSum;
}

int main() {
   
   int arr[]={2,-3,6,-5,4,2,6};
    int n = 7;
    maxSumofSubArray(arr,n);
    return 0;
}