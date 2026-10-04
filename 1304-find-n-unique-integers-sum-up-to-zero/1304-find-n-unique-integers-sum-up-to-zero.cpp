class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int neg = -1;
        int pos = 1;

        
        for(int i=0;i<n/2;i++){
            ans.push_back(neg);
            neg--;
        }
        for(int i=0;i<n/2;i++){
            ans.push_back(pos);
            pos++;
        }
        

        if(n%2!=0){
            ans.push_back(0);
        }

        return ans;
    }
};