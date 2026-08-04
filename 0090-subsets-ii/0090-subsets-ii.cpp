class Solution {
public:
    void cmb(vector<int>& nums, vector<int>& ans,
             vector<vector<int>>& hima, int i) {

        hima.push_back(ans);

        for (int j = i; j < nums.size(); j++) {

            if (j > i && nums[j] == nums[j - 1])
                continue;

            ans.push_back(nums[j]);
            cmb(nums, ans, hima, j + 1);
            ans.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<int> ans;
        vector<vector<int>> hima;

        cmb(nums, ans, hima, 0);

        return hima;
    }
};