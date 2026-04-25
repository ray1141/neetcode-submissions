class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        unordered_set<int>st(nums.begin(),nums.end());
        int ans = 1;
        for(int i=0; i<n; i++){
            int val = nums[i];
            int tempAns = 1;
            while(st.find(--val)!=st.end()){
                tempAns++;
            }
            ans = max(ans, tempAns);
        }
        return ans;
    }
};
