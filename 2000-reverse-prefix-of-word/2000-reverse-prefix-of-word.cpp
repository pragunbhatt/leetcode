class Solution {
public:
    string reversePrefix(string word, char ch) {
        int k = word.find(ch);

        int start = 0;
        int end = k;

        while(start<end){
            swap(word[start],word[end]);
            start++;
            end--;
        }

        return word;
    }
};