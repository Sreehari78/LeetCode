class Solution {
public:
    int countPrimes(int n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        vector<bool> primes(n, true);
        int res = 0;

        for(int i = 2; i < sqrt(n); i++)
            if(primes[i])
                for(int j = i * i; j < n; j += i)
                    primes[j] = false;
        
        for(int i = 2; i < n; i++)
            if(primes[i])
                res++;
        
        return res;
    }
};