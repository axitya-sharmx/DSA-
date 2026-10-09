
class Solution {
public:
    long long power(long long base, long long exp) {
        long long result = 1;
        long long mod = 1000000007;

        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % mod;
            }

            base = (base * base) % mod;
            exp /= 2;
        }

        return result;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;

        long long evenWays = power(5, even);
        long long oddWays = power(4, odd);

        return (evenWays * oddWays) % 1000000007;
    }
};
