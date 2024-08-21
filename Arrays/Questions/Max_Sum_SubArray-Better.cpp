#include <iostream>

using namespace std;

void maxSubArraySum(int *arr ,int n) {
    int maxSum = INT8_MIN;
    for(int i = 0 ;i<n;i++) {
         int currSum = 0 ;
        for(int j=i ; j<n;j++) {
           currSum+=arr[j];
          
            maxSum = max(maxSum,currSum);
        }
      
    }
    cout<<"The maximum sum of the subarray is : " <<maxSum;
}

int main() {
   
   int arr[]={2,-3,6,-5,4,2};
    int n = 6;
    maxSubArraySum(arr,n);
    return 0;
}