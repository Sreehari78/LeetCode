class Solution {
public:
    bool isSameAfterReversals(int num) {
        int org = num, rev = 0;
        
        while(org) {
            rev *= 10;
            rev += org % 10;
            org /= 10;
        }

        org = 0;
        while(rev) {
            org *= 10;
            org += rev % 10;
            rev /= 10;
            cout<< rev<<endl;
        }
        

        return org == num;
    }
};