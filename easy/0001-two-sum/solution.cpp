class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement exists in our map
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};
            }
            
            // Otherwise, store the current number and its index
            num_map[nums[i]] = i;
        }
        
        return {};
    }
};