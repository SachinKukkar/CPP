#include<iostream>
using namespace std;

int main() {

    int arr[] = {2,5,33,22,74,23,123,5547,1,22};

    int n = sizeof(arr)/sizeof(arr[0]);
int max = arr[0];
    for(int i=0;i<n;i++) {
        if (arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"The largest element is : "<<max<<endl;
}