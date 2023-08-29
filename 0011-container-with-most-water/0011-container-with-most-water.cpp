class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int area = 0, ht = 0, start = 0, end = height.size() - 1;

        while(start < end) {
            (height[start] > height[end]) ? ht = height[end] : ht = height[start];

            if(area < ht * (end -  start)) area = ht * (end -  start);

            (height[start] > height[end]) ? end-- : start++;
        }
            
        
        return area;
    }
};