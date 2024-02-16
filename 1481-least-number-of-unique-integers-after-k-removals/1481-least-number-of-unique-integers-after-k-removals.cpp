static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) 
    {
        unordered_map<int,int>mp; 
        for(int it : arr) mp[it]++;

        vector<int>freq;
        for(auto it : mp) freq.push_back(it.second);

        sort(freq.begin(),freq.end());

        int n = freq.size() - 1;
        for(int i = 0; i <= n; i++)
        {
            k-= freq[i];               
            if(k <= 0) break; 
            
        }   
        if(k == 0) return(freq.size() - n); 
        return(freq.size() - n + 1);
    }
};