class Solution {
public:
    string defangIPaddr(string address) {
        int i = 0, n = address.length();
        string ans;
         while(i < n){
            if(address[i] == '.'){
                ans.push_back('[');
                ans.push_back('.');
                ans.push_back(']');
            }
            else ans.push_back(address[i]);
            i++;
        }

        return ans;
    }
};