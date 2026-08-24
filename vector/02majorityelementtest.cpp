#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 2, 1, 1};
    sort(nums.begin(), nums.end());
    int n = nums.size();

    int freq = 1;
    int ans = nums[0];

    for(int i = 1; i < n; i++) {
        if(nums[i] == nums[i-1]) {
            freq++;
        } else {
            freq = 1;
        }

        if(freq > n/2) {
            ans = nums[i];
            cout << "Majority element is: " << ans << endl;
            break;
        }
    }

    system("pause");  // keeps console open when double-clicked
    return 0;
}
