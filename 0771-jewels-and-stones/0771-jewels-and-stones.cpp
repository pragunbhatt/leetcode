class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;

        for(char ch:jewels){
            for(char st:stones){
                if(st == ch){
                    ans++;
                }
            }
        }

        return ans;
    }
};