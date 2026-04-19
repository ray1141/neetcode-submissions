class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>umap; //mapping of element vs count
        int n = nums.size();
        for(int i=0; i<n; i++){
            umap[nums[i]]++;
        }
        vector<pair<int,int>>temp; //element to count mapping
        for(auto &it:umap){
            temp.push_back({it.second,it.first});
        }
        sort(temp.rbegin(),temp.rend()); //reverse sort
        for(int i=0; i<k; i++){
            ans.push_back(temp[i].second);
        }
        return ans;
    }
};
