#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char word[], int n) {
    int i = 0;
    int j = n - 1;
    while (i < j) {
        if (word[i] != word[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    // Start writing your code here

    char name[] = "racecar";

    if(checkPalindrome(name, strlen(name)))
        cout << "It is a Palindrome" << endl;
    else
        cout << "It is Not a palindrome" << endl;
    
    return 0;
}
