class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }

        int temp = x;
        long long int rev = 0;
        while(temp!=0){
            rev = (rev*10) + (temp%10);
            temp/=10;
        }
        if(x!=rev){
            return false;
        }

        return true;
    }
};