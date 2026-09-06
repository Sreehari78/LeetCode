class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        unordered_map<char, int> mp;
        int n = releaseTimes.size(), prevReleaseTime = 0, maxDuration = releaseTimes[0];
        char res = keysPressed[0];
        
        for(int i = 0; i < n; i++) {

            int duration = releaseTimes[i] - prevReleaseTime;
            prevReleaseTime = releaseTimes[i];

            if(!mp.contains(keysPressed[i])) mp[keysPressed[i]] = duration;
            else if (mp[keysPressed[i]] < duration) mp[keysPressed[i]] = duration;

        }

        for(auto &[key, value] : mp) {            

            if(value > maxDuration) {                
                res = key;
                maxDuration = value;
            }
            else if(value == maxDuration) res = max(res,key);
        }

        return res;
    }
};