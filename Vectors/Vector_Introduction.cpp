#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec1(10, -1);

    cout << "The size of the created vector is : " << vec1.size() << endl;

    cout << "The vector's elements are : ";
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << ", ";
    }
    cout << endl;
    return 0;
}