class Solution {
public:
    string customSortString(string order, string s) {
        
        unordered_map<char, int> frequency;
        string result;

        for (char ch : s)
            frequency[ch]++;

        for (char ch : order)
            if (frequency.find(ch) != frequency.end()) {
                result.append(frequency[ch], ch);
                frequency.erase(ch);
            }

        for (auto& entry : frequency)
            result.append(entry.second, entry.first);

        return result;
    }
};