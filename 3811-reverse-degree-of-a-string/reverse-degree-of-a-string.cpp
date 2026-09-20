class Solution {
public:
    int reverseDegree(string s) {
        int output = 0 ;

        for(int i=0;i<s.size();i++){
             int revPos = 26 - (s[i]-'a');
             output += revPos *(i+1);
             
        }
        return output;

    }
};