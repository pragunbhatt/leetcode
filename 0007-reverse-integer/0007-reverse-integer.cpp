class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while (x != 0) {
            int lastdigit = x % 10;
            
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && lastdigit > 7)) {
                return 0;
            }
            if (res < INT_MIN / 10 || (res == INT_MIN / 10 && lastdigit < -8)) {
                return 0;
            }

            res = res * 10 + lastdigit;
            x = x / 10;
        }
        return res;
    }
};