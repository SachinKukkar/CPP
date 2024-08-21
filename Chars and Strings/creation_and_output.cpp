#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // Start writing your code here
     char work[] = "code";  // right side is 'string literals' and left side is 'character array'
     char work1[5]= "code";
     char work2[] = {'c','o','d','e','\0'};
     char work3[50] = {'c','o','d','e','\0'};

     cout<<work<<endl;
     cout<<work1<<endl;
     cout<<work2<<endl;
     cout<<work3<<endl;

     cout<<strlen(work)<<endl;


    return 0;
}