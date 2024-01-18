int speedUp = [] { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.size() == 1 && citations[0] == 0) return 0;
        if(citations.size() == 1) return 1;

        int start = 0, end = citations.size() - 1, ans = 0;
  
        while(start <= end) {
            int mid = (start + end) / 2;

            if(citations[mid] >= citations.size() - mid) {
                end = mid - 1;
                ans = citations.size() - mid;
            }
            else start = mid + 1;
        }
        return ans;
    }
};