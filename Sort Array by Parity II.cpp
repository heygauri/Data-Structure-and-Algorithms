/* https://leetcode.com/problems/sort-array-by-parity-ii/description/ */

vector<int> sortArrayByParityII(vector<int>& nums) {
        // for(int i=0; i<size(nums); i++) {                   //tc = O(n^2); sc = O(1)
        //     if(nums[i]%2 != 0 && i%2 == 0) {
        //         int j =i+1;
        //         while(j<size(nums) && nums[j]%2 != 0) {
        //             ++j;
        //         }
        //         swap(nums[i], nums[j]);
        //     }else if(nums[i]%2 == 0 && i%2 != 0) {
        //         int j = i+1;
        //         while(j<size(nums) && nums[j]%2 == 0) {
        //             ++j;
        //         }
        //         swap(nums[i], nums[j]);
        //     }
        // }
        // return nums;

        vector<int> odd, even;                                      //tc = O(n); sc = O(n)
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]%2==0 && i%2 != 0) even.push_back(i);
            else if(nums[i]%2 != 0 && i%2==0) odd.push_back(i);
        }
        
        while(odd.size() && even.size()) {
            swap(nums[odd[odd.size()-1]], nums[even[even.size()-1]]);
            odd.pop_back();
            even.pop_back();
        }
        return nums;
    }
