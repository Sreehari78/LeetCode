class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        for(int i = n; i > -1; i--) {
            if(digits[i] == 9) {
                digits[i] = 0;
                if(i == 0) {
                    digits.push_back(0);
                    for(int j = 0; j < n; j++)
                        digits[j+1] = digits[j];
                    digits[0] = 1;


                }
            }
            else {
                digits[i]++;
                break;
            }
        }
        return digits;

    }
};