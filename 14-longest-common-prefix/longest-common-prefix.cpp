class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string sec = strs[strs.size() - 1];
        int n=min(first.length(),sec.length());
        for(int i=0;i<n;i++){
            if(first[i]==sec[i])
                ans+=first[i];
            else break;
        }
        return ans;
    }
};