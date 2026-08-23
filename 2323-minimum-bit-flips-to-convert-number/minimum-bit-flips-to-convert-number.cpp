class Solution {
public:
    int minBitFlips(int a, int b) {
        int count = __builtin_popcount(a ^ b);
        return count;
    }
};