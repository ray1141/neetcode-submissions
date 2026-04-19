class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //using minheap
        vector<int>ans;
        unordered_map<int,int>umap; //element to count mapping
        int n = nums.size();
        for(int i=0; i<n; i++){
            umap[nums[i]]++;
        }
        //for count to element mapping and maintaining k window
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minHeap;
        for(auto &it: umap){
            minHeap.push({it.second,it.first});
            if(minHeap.size()>k) minHeap.pop();
        }
        while(minHeap.size()){
            auto &it = minHeap.top();
            ans.push_back(it.second);
            minHeap.pop();
        }
        return ans;
    }
};
