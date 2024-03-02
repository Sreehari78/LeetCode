class Solution {
public:
    static bool comp(int a, int b) {
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);

        if (countA == countB) return a < b;
        else return countA < countB;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), comp);
        return arr;
    }
};