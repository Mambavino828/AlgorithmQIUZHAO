class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        unordered_map<int, int> count;
        for (auto num : nums) count[num]++;
        for (auto keyValue : count)
        {
            pq.push({ keyValue.second,keyValue.first });
            while (pq.size() > k)  pq.pop();
        }
        vector<int> res;
        while (!pq.empty())
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};