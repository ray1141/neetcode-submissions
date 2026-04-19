class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>umap;
        for(auto &s: strs){
            vector<int>hash(26); //because there are 26 lowercase characters
            for(char &c: s){
                hash[c-'a']++;
            }
            //create key string
            string key;
            for(int i=0; i<26;i++){
                key+=to_string(hash[i])+",";
            }
            umap[key].push_back(s);
        }
        for(auto &it : umap){
            ans.push_back(it.second);
        }
        return ans;
    }
};
