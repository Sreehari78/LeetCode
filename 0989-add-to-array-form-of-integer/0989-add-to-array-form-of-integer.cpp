class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num1, int k) {
        vector<int> num2, val1, val2;

        while (k) {
            num2.push_back(k % 10);
            k /= 10;
        }

        reverse(num1.begin(), num1.end());
        int n = num1.size(), m = num2.size(), carry = 0;
        (n > m) ? (val1 = num1, val2 = num2) : (val1 = num2, val2 = num1);

        for (int i = 0; i < val1.size(); i++) {
            int a = val1[i], b = 0, sum = 0;

            if (i < val2.size())
                b = val2[i];
            (a + b + carry > 9) ? (sum = (a + b + carry) % 10, carry = 1)
                                : (sum = a + b + carry, carry = 0);
            val1[i] = sum;
        }

        if (carry)
            val1.push_back(1);
        reverse(val1.begin(), val1.end());

        return val1;
    }
};