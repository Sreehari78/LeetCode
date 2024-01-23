class Solution {
public:
    int maxLength(vector<string>& arr) {
        int maxLength = 0;
        vector<string> currentSubsequence;

        backtrack(arr, 0, currentSubsequence, maxLength);

        return maxLength;
    }

private:
    void backtrack(const vector<string>& arr, int start, vector<string>& currentSubsequence, int& maxLength) {
        unordered_set<char> charSet;
        for (const string& str : currentSubsequence) {
            for (char ch : str) {
                if (charSet.count(ch) > 0) {
                    return;  
                }
                charSet.insert(ch);
            }
        }

        int currentLength = 0;
        for (const string& str : currentSubsequence) {
            currentLength += str.length();
        }

        maxLength = max(maxLength, currentLength);

        for (int i = start; i < arr.size(); ++i) {
            currentSubsequence.push_back(arr[i]);
            backtrack(arr, i + 1, currentSubsequence, maxLength);
            currentSubsequence.pop_back();
        }
    }
};