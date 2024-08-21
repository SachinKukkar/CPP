#include <iostream>
#include <cstring>


using namespace std;

void toLowerCase(char word[],int n) {
for(int i=0;i<n;i++) {
    char ch = word[i];
    if(ch>='a' && ch<='z'){
        continue;
    }
    else{
        word[i]=ch-'A'+'a';
    }
}
}

int main() {
    // Start writing your code here
    char word[] = "SACHIN";

    toLowerCase(word,strlen(word));
    cout<<word<<endl;
    return 0;
}
