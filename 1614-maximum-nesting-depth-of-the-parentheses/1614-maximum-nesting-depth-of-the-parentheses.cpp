class Solution {
public:
    int maxDepth(string s) {
        int count = 0, result = 0;
        for (char it : s)
            if (it == '(')
                result = max(result, ++count);
            else if (it == ')' && count > 0)
                count--;
        return result;
    }
};