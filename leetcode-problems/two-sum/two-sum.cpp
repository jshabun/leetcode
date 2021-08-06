#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // O(n^2)
        vector<int> temp(2);
        for (int i  = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    cout << "Output: [" << i << "," << j << "]" << endl;
                    temp[0] = i;
                    temp[1] = j;
                }
            }
        }
        return temp;
    }
};

class BetterComplexity {
public:
    vector<int> twoSum2(vector<int>& nums, int target) {
        // O()
    }
};