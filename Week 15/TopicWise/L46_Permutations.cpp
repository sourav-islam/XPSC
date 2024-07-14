class Solution
{
public:
    void func(vector<int> &nums, int freq[], vector<int> &v, int n, vector<vector<int>> &ans)
    {
        if (n == v.size())
        {
            ans.push_back(v);
            return;
        }

        for (int i = 0; i < n; i++)
        {
            if (!freq[i])
            {
                v.push_back(nums[i]);
                freq[i] = 1;
                func(nums, freq, v, n, ans);
                v.pop_back();
                freq[i] = 0;
            }
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {

        vector<int> v;
        vector<vector<int>> ans;
        int n = nums.size();
        int freq[n];
        for (int i = 0; i < n; i++)
            freq[i] = 0;
        func(nums, freq, v, n, ans);
        return ans;
    }
};