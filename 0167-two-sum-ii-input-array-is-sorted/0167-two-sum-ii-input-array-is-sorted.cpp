class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i = 0; i < n - 1; i++) {
            if(numbers[i] == numbers[i + 1] && target != 2*numbers[i]) continue;
            for(int j = i + 1; j < n; j++)
                if(numbers[i] + numbers[j] == target) return {i + 1, j + 1};
        }
        
        return {0, 0};
    }
};