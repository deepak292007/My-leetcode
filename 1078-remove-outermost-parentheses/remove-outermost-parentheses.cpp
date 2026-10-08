class Solution {
public:
    string removeOuterParentheses(string s) {
        int balence =0 ;
        string ans ="";
        for (int i=0;i< s.length();i++){
            if(s[i]=='('){
                if(balence>0){
                    ans +=s[i];
                }
                balence ++;
            }
            else if(s[i]==')'){
                balence-- ;
                if(balence>0){
                    ans +=s[i];
                }
            }
        }
        return ans;
       
        
    }
};