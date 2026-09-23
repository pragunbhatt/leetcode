class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool insidePair = false;

        for (char c : s) {
            if (c == '|') {
                insidePair = !insidePair; // Toggle state on encountering '|'
            } else if (c == '*' && !insidePair) {
                count++; // Count '*' only when outside vertical bar pairs
            }
        }

        return count;
    }
};