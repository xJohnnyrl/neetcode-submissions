#include <unordered_map>

bool comp(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> output;
        unordered_map<int, int> tracker;

        for (int i = 0; i < nums.size(); i++){
            tracker[nums[i]]++;
        }

        vector<pair<int, int>> elems(tracker.begin(), tracker.end());

        sort(elems.begin(), elems.end(), comp);

        for (int i = 1; i <= k; i++){
            output.push_back(elems[i - 1].first);
        }

        return output;
    }
};
