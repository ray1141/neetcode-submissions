class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>st1;
        int n = nums.size();
        for(int i=0; i<n-2; i++){
            unordered_set<int>st2;
            for(int j=i+1; j<n; j++){
                int third = -(nums[i]+nums[j]);
                if(st2.find(third)!=st2.end()){
                    vector<int>temp = {nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    st1.insert(temp);
                }
                st2.insert(nums[j]);
            }
        }
        vector<vector<int>>ans(st1.begin(),st1.end());
        return ans;
    }
};
