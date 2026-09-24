class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();

        if(n<26){
            return false;
        }

        vector<int> freq(26,0);

        for(int i=0;i<n;i++){
            int pos = sentence[i]-'a';
            freq[pos]++;
        }

        for(int i=0;i<26;i++){
            if(freq[i]==0){
                return false;
            }
        }

        return true;
    }
};