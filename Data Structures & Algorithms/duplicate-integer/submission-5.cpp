#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<unsigned int, int> collector;
        if (nums.size() < 1) return false;

        for (int i = 0; i < nums.size(); i++){
            collector[nums[i]]++;

            if (collector[nums[i]] > 1){
                return true;
            }
        }

        return false;
    }
};