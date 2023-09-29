/* https://leetcode.com/problems/two-sum/description/ */

vector<int> twoSum(vector<int>& nums, int target) {
        
        // for(int i=0; i<size(nums); i++) {               //tc = O(n^2); sc = O(1)
        //     for(int j=i+1; j<size(nums); j++) {
        //         int sum = nums[i]+nums[j];
        //         if(sum == target) {
        //            return {i, j};
        //         }
        //     }
        // }

        unordered_map<int, int> m;                          //tc = O(n); sc = O(n)
        for(int i=0; i<size(nums); i++) {
            m[target-nums[i]] = i;
        }
        for(auto it:m) {
            cout<<it.first<<" "<<it.second<<endl;
        }
        for(int i=0; i<size(nums); i++) {
            auto it = m.find(nums[i]);
            if(it != m.end()&& it->second != i ) {
                return {it->second, i};
            }
        }


        return {};
    }
