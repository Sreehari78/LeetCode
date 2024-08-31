class Solution {
public:
    int countPrimes(int n) {
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