class Solution {
public:

    string encode(vector<string>& strs) {
        //using delimiter as length and comma
        if(strs.size()==0) return "";
        string encodedString;
        for(auto &s: strs){
            encodedString+=to_string(s.size())+","+s;
        }
        return encodedString;
    }

    vector<string> decode(string s) {
        if(s=="") return {};
        vector<string>decodedVector;
        for(int i=0; i<s.size(); i++){
            int len;
            string lenTemp;
            while(i<s.size() && s[i]!=','){
                lenTemp+=s[i];
                i++;
            }
            len = stoi(lenTemp);
            decodedVector.push_back(s.substr(i+1,len));
            i=i+len;
        }
        return decodedVector;
    }
};
