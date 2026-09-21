class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char alp = coordinates[0];
        int num = int(coordinates[1]);

        int pos = alp-'a';
        if(pos%2==0 && num%2 != 0){
            return false;
        }else if(pos%2!=0 && num%2 == 0){
            return false;
        }

        return true;
    }
};