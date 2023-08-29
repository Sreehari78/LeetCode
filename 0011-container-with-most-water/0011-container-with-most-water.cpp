class Solution {
public:
    int maxArea(vector<int>& height) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        int area = 0, ht = 0, start = 0, end = height.size() - 1;

        while(start < end) {
            (height[start] > height[end]) ? ht = height[end] : ht = height[start];

            if(area < ht * (end -  start)) area = ht * (end -  start);

            (height[start] > height[end]) ? end-- : start++;
        }
            
        
        return area;
    }
};