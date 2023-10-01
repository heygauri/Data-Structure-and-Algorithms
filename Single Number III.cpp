/* https://leetcode.com/problems/single-number-iii/ */

vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;                //tc=O(n); sc=O(1)
        unordered_map<int, int> m;

        for(int &i:nums) {
            ++m[i];
        }

        for(auto it:m) {
            if(it.second == 1)  ans.push_back(it.first);
        }

        return ans;
    }
