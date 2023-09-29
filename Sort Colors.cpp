/* https://leetcode.com/problems/sort-colors/description/ */

void sortColors(vector<int>& nums) {
        // map<int, int> m;                //tc = O(n); sc = O(n)
        // for(int &i:nums) {
        //     ++m[i];
        // }
        // int i=0;
        // for(auto it:m) {
        //     int count = it.second;
        //     while(count > 0) {
        //         nums[i] = it.first;
        //         --count;
        //         ++i;
        //     }
        // }

        int i=0, j=0, n=size(nums);         //tc = O(n); sc = O(1)
        while(i<n) {
            if(nums[i] == 0) {
                swap(nums[i], nums[j]);
                ++j;
            }
            ++i;
        }
        i=j;
        while(i<n) {
            if(nums[i] == 1) {
                swap(nums[i], nums[j]);
                ++j;
            }
            ++i;
        }
    }
