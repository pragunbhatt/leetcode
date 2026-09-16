class Solution {
public:
    int smallestEvenMultiple(int n) {
        int temp = n;
        bool ans = true;

        while(true){
            if(temp%2 == 0 && temp%n == 0){
                return temp;
                break;
            }
            temp++;
        }
    }
};