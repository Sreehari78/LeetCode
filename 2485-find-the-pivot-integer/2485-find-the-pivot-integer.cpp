class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1) return 1;

        for(int x = 1; x < n; x++) {
            int sum1 = 0, sum2 = 0;

            for(int i = 1; i <= n; i++) {
                if(i <= x) sum1 += i;
                if(i >= x) sum2 += i;
            }
            // cout<<sum1<<" "<<sum2<<endl;


            if(sum1 == sum2) return x;
        }

        return -1;
                

    }
};