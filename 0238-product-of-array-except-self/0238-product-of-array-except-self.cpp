class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        int product = 1;
        bool hasZero = false, hasNonZero = false, hasOverOneZero = false;
        vector<int> res;

        for (int num : nums)
            if (num) {
                hasNonZero = true;
                break;
            }

        if (!hasNonZero)
            return nums;

        for (int num : nums)
            if (num)
                product *= num;
            else if (hasZero)
                hasOverOneZero = true;
            else
                hasZero = true;

        if (hasOverOneZero)
            for (int num : nums)
                res.push_back(0);

        else if (hasZero)
            for (int num : nums)
                if (num)
                    res.push_back(0);
                else
                    res.push_back(product);
                    
        else
            for (int num : nums)
                if (num)
                    res.push_back(product / num);
                else
                    res.push_back(product);

        return res;
    }
};