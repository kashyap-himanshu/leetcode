class Solution {
public:
    set<int> ans;

    void solve(vector<int>& arr, int i, set<int> dp[]) {
        if (i == arr.size()) return;

        dp[i].insert(arr[i]);

        for (int v : dp[i - 1]) {
            dp[i].insert(v | arr[i]);
        }

        for (int v : dp[i]) {
            ans.insert(v);
        }

        solve(arr, i + 1, dp);
    }

    int subarrayBitwiseORs(vector<int>& arr) {
        int n = arr.size();
        ans.clear();

        set<int> dp[n];

        dp[0].insert(arr[0]);
        ans.insert(arr[0]);

        solve(arr, 1, dp);

        return ans.size();
    }
};