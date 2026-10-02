class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();

        vector<int> freq(501,0);
        int m = freq.size();

        vector<int> ans;

        for (int i =0;i<n;i++){
            freq[arr[i]]++;
        }

        for(int i=1;i<m;i++){
            if(freq[i] == i){
                ans.push_back(i);
            }
        }

        if(ans.empty()){
            return -1;
        }

        int lar = ans[0];
        int len = ans.size();

        for(int i = 0;i<len;i++){
            if(ans[i]>lar){
                lar = ans[i];
            }
        }

        return lar;

        
    
    }
};