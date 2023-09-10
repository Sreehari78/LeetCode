class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        if(arr.size() == 1) return arr[0];

        int low = 0, high = arr.size() - 1, mid = 0;

        if(arr[low] > arr[low + 1]) return arr[low];
        if(arr[high] > arr[high - 1]) return arr[high];
        low++;
        high--;

        while(low <= high) {
            mid = (low + high) / 2;

            if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) return mid;

            if(arr[mid - 1] <= arr[mid]) low = mid + 1;
            else high = mid - 1;

        }
        return mid;
    }
};
