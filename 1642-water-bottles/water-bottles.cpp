class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int bottles_sum = numBottles;
       while(numBottles>=numExchange)
       {
        bottles_sum+=numBottles/numExchange;
        numBottles = (numBottles/numExchange)+(numBottles%numExchange);
      
       } 
       return bottles_sum;
    }
}; 