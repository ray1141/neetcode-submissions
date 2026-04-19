class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>umap; //mapping of value to index
        int n = nums.size();
        for(int i=0; i<n; i++){
            int sum = target - nums[i];
            if(umap.find(sum)!=umap.end()){
                ans.push_back(i);
                ans.push_back(umap[sum]);
            }
            umap[nums[i]]=i;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
