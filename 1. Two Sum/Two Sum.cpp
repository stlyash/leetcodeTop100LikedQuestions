class Solution {
public:

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res(2,0);
    for(int i = 0; i < nums.size()-1; i++)
    {
        res[0] = i;
        for(int j = i+1; j < nums.size(); j++)
        {
            if(nums[j] + nums[i] == target)
            {
                res[1] = j;
                return res;
            }
        }
    }
    return res;
}
};
