class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while(i < j) {
            if(numbers[i] + numbers[j] == target) return {i + 1, j + 1};
            else if(numbers[i] + numbers[j] < target) i++;
            else j--;
        }
        
        return {0, 0};
    }
};