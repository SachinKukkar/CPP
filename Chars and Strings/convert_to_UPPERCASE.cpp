#include <iostream>
#include <cstring>


using namespace std;

void toUpperCase(char word[],int n) {
for(int i=0;i<n;i++) {
    char ch = word[i];
    if(ch>='A' && ch<='Z'){
        continue;
    }
    else{
        word[i]=ch-'a'+'A';
    }
}
}

int main() {
    // Start writing your code here
    char word[] = "apPlE";

    toUpperCase(word,strlen(word));
    cout<<word<<endl;
    return 0;
}
