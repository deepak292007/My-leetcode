

class Solution {
public:
    int countCommas(int n) {
        int total = 0;
        for (int i = 1000; i <= n; i++) {
            string s = to_string(i);
            // insert commas manually
            int len = s.size();
            if (len > 3) {
                // commas = (len-1)/3
                total += (len - 1) / 3;
            }
        }
        return total;
    }
};
