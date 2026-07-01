class Solution {
public:
   
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> hima;
        unordered_map<int,int> f;
        priority_queue<pair<int,int>> p;

        // Count frequency
        for (int i = 0; i < nums.size(); i++) {
            f[nums[i]]++;
        }

        // Push {frequency, element}
        for (auto it : f) {
            p.push({it.second, it.first});
        }

        // Take top k elements
        for (int i = 1; i <= k; i++) {
            hima.push_back(p.top().second);
            p.pop();
        }

        return hima;

        
    }
};