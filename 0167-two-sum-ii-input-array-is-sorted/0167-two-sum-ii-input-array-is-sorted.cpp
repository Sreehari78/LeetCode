int speedUp = [] { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while (i < j) {
            if (numbers[i] + numbers[j] == target)
                return {i + 1, j + 1};
            else if (numbers[i] + numbers[j] < target)
                i++;
            else
                j--;
        }

        return {};
    }
};