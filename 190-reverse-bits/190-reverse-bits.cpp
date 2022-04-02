class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t nn=0;
        for(int i=0;i<32;i++)
            nn=(nn<<1)+(n>>i & 1);
        return nn;
    }
};