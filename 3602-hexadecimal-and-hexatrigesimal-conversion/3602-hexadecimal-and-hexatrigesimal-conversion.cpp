class Solution {
public:
    string concatHex36(int n) {
        string hexd = "", hext = "", dataset = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";\
        int num1 = n*n, num2 = n*n*n;

        while(num1) {
            hexd += dataset[num1%16];
            num1 /= 16;
        }
        reverse(hexd.begin(), hexd.end());
        
        while(num2) {
            hext += dataset[num2%36];
            num2 /= 36;
        }
        reverse(hext.begin(), hext.end());

        return hexd+hext;
    }
};