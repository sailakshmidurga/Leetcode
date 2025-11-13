class Solution {
public:
    int reverseBits(int n) {
         uint32_t result = 0;
    for (int i = 0; i < 32; ++i) {
        result <<= 1;         // Shift result left to make room
        result |= (n & 1);    // Add the least significant bit of n
        n >>= 1;              // Shift n right to process the next bit
    }
    return result;

    }
};