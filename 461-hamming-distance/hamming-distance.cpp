class Solution {
public:
    int hammingDistance(int x, int y) {
        int steps=0;
        while(x||y){
            if((x&1)!=(y&1)) steps++;
            y>>=1;
            x>>=1;
        }
        return steps;
    }
};