/* https://leetcode.com/problems/monotonic-array/description/?envType=daily-question&envId=2023-09-29 */

bool isMonotonic(vector<int>& nums) {
        bool x{true}, y{true};                  //tc = O(n); sc = O(1)
        //Asc order
        for(int i=1; i<size(nums); i++) {
            if(nums[i-1] > nums[i]) {
                x = false;
                break;
            }
        }
        //Desc order
        for(int i=1; i<size(nums); i++) {
            if(nums[i-1] < nums[i]) {
                y = false;
                break;
            }
        }

        return x || y;
    }
