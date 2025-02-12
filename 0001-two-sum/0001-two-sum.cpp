class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        
        // Traversal array
        for (int idx = 0; idx < nums.size(); ++idx)
        {
            // nums[idx] + diff == target
            int diff = target - nums[idx];

            // If diff previously existed
            if (map.find(diff) != map.end())
            {
                // Add index that is value for diff(key)
                // Add current index
                return {map[diff], idx};
            }
            else
            {
                // map[nums[idx]] = idx (Need index)
                map.insert(std::make_pair(nums[idx], idx));
            }
        }

        // Cannot find match numbers
        return {};
    }
};