class Solution {
public:
    int strStr(string haystack, string needle) {
        int haylen = haystack.length();
        int needlen = needle.length();

        if(needlen > haylen){
            return -1;
        }
        for(int i=0;i<=haylen-needlen;i++){
            if(haystack.substr(i,needlen)==needle){
                return i;
            }
        }
        return -1;
    }
};