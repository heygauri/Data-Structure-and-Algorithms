/* https://leetcode.com/problems/single-number/description/ */

int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;      //tc = O(n); sc=O(n)
        for(int &i:nums) {
            ++m[i];
        }
        for(auto it:m) {
            if(it.second == 1)  return it.first;
        }

        return -1;
    }
