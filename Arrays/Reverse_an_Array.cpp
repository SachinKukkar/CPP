// #include <iostream>

// using namespace std;

// int main() {
//     // Start writing your code here
    
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// With constant O(1) space  - Two Pointer approach 
#include <iostream>

using namespace std;

int main() {
    // Start writing your code here
     int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0,j=n-1;i<n,j>=0;j--,i++) {
    //     swap(arr[i],arr[j]);
    // }


// We can use the while loop as well yrr 
int i = 0  , j = n-1;
while(i<j) {
    swap(arr[i],arr[j]);
    j--;
    i++;
}

for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}