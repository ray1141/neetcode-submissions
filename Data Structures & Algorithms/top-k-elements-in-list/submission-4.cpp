class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       //using bucket sort
       vector<int>ans;
       unordered_map<int,int>umap; //element to count mapping
       int n = nums.size();
       for(int i=0; i<n; i++){
        umap[nums[i]]++;
       }
       vector<vector<int>>hash(n+1); //hashing array for count to element mapping
       for(auto &it: umap){
        hash[it.second].push_back(it.first);
       }
       for(int i=n;i>=1;i--){
        for(auto &a : hash[i]){
            ans.push_back(a);
            if(ans.size()==k) return ans;
        }
       }
       return {};
    }
};
