class Solution {
public:
    int concatenatedBinary(int n) {
        long long ans = 0;
        const long long MOD = 1000000007;

        for (int i = 1; i <= n; i++) {
            int bits = 0;
            int x = i;

            while (x > 0) {
                bits++;
                x /= 2;
            }

            ans = ((ans << bits) | i) % MOD;
        }

        return ans;
    }
};