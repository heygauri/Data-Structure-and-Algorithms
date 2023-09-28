vector<int> sortArrayByParity(vector<int>& nums) {

        // int n=size(nums);                            tc = O(n^2); sc = O(1)
        // for(int i=0; i<n; i++) {
        //     if(nums[i]%2 != 0) {
        //         nums.push_back(nums[i]);
        //         nums.erase(nums.begin()+i);
        //         n--; i--;
        //     }
        // }
        // return nums;

        // vector<int> ans;                                //tc = O(n); sc = O(n)
        // for(int &i:nums) {
        //     if(i%2 == 0) ans.push_back(i);
        // }
        // for(int &i:nums) {
        //     if(i%2 != 0) ans.push_back(i);
        // }   
        // return ans;

        or(int i=0, j=0; i<size(nums) && j<size(nums); i++) {      tc = O(n); sc =O(1)
            if(nums[i]%2 == 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
        return nums;

    }
