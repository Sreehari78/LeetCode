class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        if(citations.size() == 1 && citations[0] == 0) return 0;
        if(citations.size() == 1) return 1;

        int start = 0, end = citations.size() - 1, ans = 0;
        while(start <= end) {
            int mid = (start + end) / 2;

            if(citations[mid] >= citations.size() - mid) {
                ans = citations.size() - mid;
                end = mid - 1;
            }
            else start = mid + 1;
        }

        return ans;
    }
};