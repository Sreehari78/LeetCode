class Solution {
public:
    string addBinary(string a, string b) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        int alen = a.length(), blen = b.length(), i = 0, carry = 0;
        string ans = "";

        while(i < alen || i < blen || carry != 0){
            int x = 0;
            if(i < alen && a[alen - i - 1] == '1'){
                x = 1;
            }
            int y = 0;
            if(i < blen and b[blen - i - 1] == '1'){
                y = 1;
            }
            ans = to_string((x + y + carry) % 2) + ans;
            carry= (x + y + carry) / 2;
            i += 1;
        }
        return ans;
    }
};
