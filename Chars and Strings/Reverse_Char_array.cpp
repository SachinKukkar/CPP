#include <iostream>
#include <cstring>

using namespace std;

void reverse(char word[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(word[i],word[j]);
        i++;
        j--;
    }
    
}

int main() {
    // Start writing your code here

    char name[] = "sachin";
    reverse(name,strlen(name));
    cout<<"Reverse is : "<<name<<endl;
    
    return 0;
}