#include <iostream>

using namespace std;

int main() {
    
    int arr[4][3] = {{45,67,98},
                          {56,78,98},
                          {99,87,65},
                          {23,45,67}
                         };
    int n = 4,m=3;

cout<<"Printing the predefined 2D array : "<<endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
  
cout<<"Enter the values of the 2D array : "<<endl;
    int arr1[4][3];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>arr1[i][j];
        }
        
    }

cout<<endl;
cout<<"Printing the input array : "<<endl;
   for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}