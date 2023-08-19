class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=s.length();
        int arr[128];

        for(int k=0;k<128;k++)
            arr[k] = -1;

        int left = 0, ml = 0;

        for(int i = 0; i < l; i++)
        {
            if(arr[s[i]] >= left) left = arr[s[i]] + 1;            
            arr[s[i]] = i;
            ml=max(ml,i-left+1);
        }

        return ml;
    }
};