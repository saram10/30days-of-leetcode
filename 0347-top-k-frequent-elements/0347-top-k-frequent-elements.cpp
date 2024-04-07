class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frq;
        for(int num:nums){
            frq[num]++;
        }
        auto com=[](pair<int,int>& a,pair<int,int>&b){
            return a.second>b.second;
        };
        priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(com)> mini(com);
        for (auto& entry:frq){
            mini.push(entry);
            if(mini.size()>k){
                mini.pop();
            }
        }
        vector<int>ans;
        while(!mini.empty()){
            ans.push_back(mini.top().first);
            mini.pop();
        }
        reverse(ans.begin(),ans.end());        
        return ans;
    }
};