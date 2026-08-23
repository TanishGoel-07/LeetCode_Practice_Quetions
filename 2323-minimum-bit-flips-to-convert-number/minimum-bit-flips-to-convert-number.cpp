class Solution {
public:
    int minBitFlips(int a, int b) {
        int x = a ^ b;
    int cnt = 0;

    while (x) {
        cnt += x & 1;   // check last bit
        x >>= 1;
    }
    return cnt;
    }
};