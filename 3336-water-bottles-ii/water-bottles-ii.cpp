class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int empty = numBottles;
        int full = 0;
        while(empty>=numExchange)
        {
            empty = empty-numExchange+1;
            full++;
            numExchange++;
        }
        return numBottles+full;
    }
};