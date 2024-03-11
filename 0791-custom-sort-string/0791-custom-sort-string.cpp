class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> frequency;
        string result;

        // Count the frequency of each character in s
        for (char ch : s)
            frequency[ch]++;

        // Append characters in order according to their occurrence in s
        for (char ch : order) {
            if (frequency.find(ch) != frequency.end()) {
                result.append(frequency[ch], ch);
                frequency.erase(ch); // Remove the character from frequency map
            }
        }

        // Append remaining characters that are not in the order
        for (auto& entry : frequency) {
            result.append(entry.second, entry.first);
        }

        return result;
    }
};