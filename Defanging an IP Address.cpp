//https://leetcode.com/problems/defanging-an-ip-address/

class Solution {
public:
    string defangIPaddr(string address) {
    string ans="";
        for(int i=0;i<address.length();i++){
            if(address.at(i)=='.'){
                ans+="[.]";
            }
            else{
                ans+=address.at(i);
                
            }
        }    
        return ans;
    }
};
