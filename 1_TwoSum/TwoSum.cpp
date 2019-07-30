class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        
        std::map<int,int> map_nums;
        for (int i = 0; i < nums.size(); i++) {
            std::map<int,int>::iterator iter = 
                map_nums.find(target-nums[i]);
            if (iter != map_nums.end()) {
                result.push_back(iter->second);
                result.push_back(i);
                break;
            } else {
                map_nums[nums[i]] = i;
            }
        }
        
        return result;
    }
};
