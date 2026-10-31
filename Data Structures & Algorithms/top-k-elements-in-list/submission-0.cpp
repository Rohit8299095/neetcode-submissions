class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto num:nums)
        {
            mp[num]++;
        }
         for(auto it : mp)
        {
            pq.push({it.second, it.first});

            if(pq.size() > k)
            {
                pq.pop();
            }
        }
        vector<int>res;
        while(!pq.empty())
        {
            auto [fre,ele]=pq.top();
            pq.pop();
            res.push_back(ele);
        }
        return res;
    }
};
