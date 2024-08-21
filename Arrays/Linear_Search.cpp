#include <iostream>

using namespace std;

int linearSearch(int arr[] , int n , int x){
    for(int i=0;i<n;i++) {
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main() {
   
   int arr[] = {2,34,5,23,64,23,312,11,33,3};
   int n = sizeof(arr)/sizeof(arr[0]);
   
   cout<<linearSearch(arr,n,19);

}