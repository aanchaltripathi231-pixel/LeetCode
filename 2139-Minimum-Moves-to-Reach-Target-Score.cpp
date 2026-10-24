class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int moves = 0;

        while (target > 1 && maxDoubles > 0) {
            if (target % 2 == 0) {
                target /= 2;
                maxDoubles--;
                moves++;
            } else {
                target--;
                moves++;
            }
        }

        // No doubles left, so only increments are possible
        moves += target - 1;

        return moves;
    }
};