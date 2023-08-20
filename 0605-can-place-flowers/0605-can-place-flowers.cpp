class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int length = flowerbed.size();

        if(n == 0) return true;
        if(length == 1)
            if(n > 1) return false;
            else if(flowerbed[0] == 0) return true;
            else return false;

        if(flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1;
            n--;
        }

        for(int i = 1; i < length - 1 && n > 0; i++)
        {
            if(flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                n--;
            }
        }

        if(flowerbed[length - 1] == 0 && flowerbed[length - 2] == 0 && n > 0) {
            flowerbed[length - 1] = 1;
            n--;
        }

        if(n == 0) return true;
        return false;
    }
};