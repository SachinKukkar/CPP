#include <iostream>
#include <string>

using namespace std;

bool isAnagram(string str1,string str2){
    if(str1.length()!=str2.length()){
        cout<<"Not valid anagrams !";
        return false;
    }

    int count[26]={0};
    
    for(int i=0;i<str1.length();i++){
        int index = str1[i]-'a';
        count[index]++;
    }

    for(int i=0;i<str2.length();i++){
        int index = str2[i]-'a';
        if(count[index]==0){
            cout<<"Not valid anagrams !";
            return false;
        }
        count[index]--;
    }
cout<<"Valid anagrams";
    return true;

}

int main() {
    // Start writing your code here

 string str1="anagram";
 string str2="nagaram";

isAnagram(str1,str2);

    return 0;
}