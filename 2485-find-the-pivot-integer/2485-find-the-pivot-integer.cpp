class Solution {
public:
    int pivotInteger(int n) {
        return sqrt(n * (n + 1) / 2) == int(sqrt(n * (n + 1) / 2)) ? sqrt(n * (n + 1) / 2) : -1;
    }
};