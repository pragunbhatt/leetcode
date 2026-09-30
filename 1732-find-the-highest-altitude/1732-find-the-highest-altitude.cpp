class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> ans(n+1,0);

        for(int i = 1;i<n+1;i++){
            ans[i] = ans[i-1] + gain[i-1];
        }

        int lar = ans[0];
        for(int i=0;i<n+1;i++){
            if(ans[i]>lar){
                lar = ans[i];
            }
        }

        return lar;
    }
};