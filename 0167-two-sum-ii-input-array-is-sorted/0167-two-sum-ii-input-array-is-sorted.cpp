class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        int left = 0, right = numbers.size() - 1;

        while (left < right) {
            if (numbers[left] + numbers[right] == target)
                return {++left, ++right};
            else if (numbers[left] + numbers[right] > target)
                right--;
            else
                left++;
        }

        return {};
    }
};