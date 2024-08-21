#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> arr, int target) {
    int s = 0;
    int e = arr.size() - 1;
    int currSum = 0;
    vector<int> ans;
    
    while (s < e) {
        currSum = arr[s] + arr[e];
        if (currSum == target) {
            ans.push_back(s);
            ans.push_back(e);
            return ans;
        }
        else if (currSum > target) {
            e--;
        }
        else {
            s++;
        }
    }
    return ans;
}

int main() {
    vector<int> vec = {12,5,19,11,6};
    vector<int> ans = pairSum(vec, 17);

    if (!ans.empty()) {
        cout << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No pair found that sums to the target." << endl;
    }

    return 0;
}
