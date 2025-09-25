/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> num_map; // value -> index
            for (int i = 0; i < nums.size(); ++i) {
                int complement = target - nums[i];
                if (num_map.find(complement) != num_map.end()) {
                    return {num_map[complement], i};
                }
                num_map[nums[i]] = i;
            }
            return {};
        }
    };
// @lc code=end

