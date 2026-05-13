#include <bits/stdc++.h>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> solution;

        for (int i = 0; i < strs.size(); i++){
            if (solution.size() == 0) {
                solution.push_back({strs[i]});
                continue;
            };
            
            string temp1  = strs[i];
            sort(temp1.begin(), temp1.end());
            bool added = false;
            
            for (int j = 0; j < solution.size(); j++){
                string temp2 = solution[j][0];
                sort(temp2.begin(), temp2.end());

                if (temp1 == temp2){
                    solution[j].push_back(strs[i]);
                   added = true;
                }
            }

            if (!added) solution.push_back({strs[i]});
        }
        
        return solution;
    }
};