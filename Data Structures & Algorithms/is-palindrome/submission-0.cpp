class Solution {
public:
    string createPalindromeString (string s){
        string tempString = "";
        for(char &c: s){
            if((c>='a' && c<='z') || (c>='0' && c<='9')) tempString.push_back(c);
            else if(c>='A' && c<='Z') tempString.push_back(tolower(c));
            else continue;
        }   
        return tempString;   
    }
    bool isPalindrome(string s) {
        string palindromeString = createPalindromeString(s);
        int i = 0;
        int j = palindromeString.size() - 1;
        while(i<=j){
            if(palindromeString[i++]!=palindromeString[j--]) return false;
        }
        return true;
    }
};
