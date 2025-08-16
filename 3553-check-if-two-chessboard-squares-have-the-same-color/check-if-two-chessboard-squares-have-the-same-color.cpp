class Solution {
    public:
    string color( string a)
    {
      char col = a[0];
      char row = a[1]; 
        int x = col - 'a'; 
        int y = row - '1'; 
        return ((x + y) % 2 == 0) ? "white" : "black";

    }
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        return color(coordinate1) == color(coordinate2);
    }
};