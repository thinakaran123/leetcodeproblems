//https://leetcode.com/problems/shuffle-string/

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans=s;
        int n=s.size();
        for(int i=0;i<n;i++){
            ans[indices[i]]=s[i];
        }
        return ans;
    }
};
