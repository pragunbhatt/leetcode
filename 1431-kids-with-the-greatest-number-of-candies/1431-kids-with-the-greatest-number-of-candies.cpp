class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int lar = candies[0];

        for(int i = 0;i<n;i++){
            lar = max(lar,candies[i]);
        }

        vector<bool> result;

        for(int i=0;i<n;i++){
            if((candies[i]+extraCandies)>=lar){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }

        return result;
    }
};