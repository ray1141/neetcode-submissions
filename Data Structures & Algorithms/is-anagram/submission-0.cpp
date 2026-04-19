class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>umap1;
        unordered_map<char,int>umap2;
        for(auto &c : s){
            umap1[c]++;
        }
        for(auto &c: t){
            umap2[c]++;
        }
        for(auto &it: umap1){
            if(it.second!=umap2[it.first]) return false;
        }
        for(auto &it: umap2){
            if(it.second!=umap1[it.first]) return false;
        }
        return true;
        
    }
};
