class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int res;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] - target >=0)
            {    
                res = i;
                break;
            }
        }
        return res;
    }
};
