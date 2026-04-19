class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>umap;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(umap[nums[i]]>0) return true;
            umap[nums[i]]++;
        }
        return false;
        
    }
};