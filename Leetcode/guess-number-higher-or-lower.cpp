/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int s = 1;
        int e = n;
        long long mid = e + (s - e) / 2;
        while(s <= e) {
            mid = e + (s - e) / 2;
            if(guess(mid) == 0) {
                return mid;
            } 
            if(guess(mid) == - 1){
                e = mid - 1;
            }
            if(guess(mid) == 1) {
                s = mid + 1;
            }
            if(e == s) {
                return s;
            }
        }
        return 0;
    }
};