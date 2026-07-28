class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp ="";
        for(int i=0; i<strs[0].size();i++){
            int a = 0;
            for(int j=1;j<strs.size();j++){
                if(strs[0][i] == strs[j][i]){
                    a+=1;
                }
                else{
                    return lcp;
                }
            }
            if(a==strs.size()-1){
                lcp += strs[0][i];
            }
        }
     return lcp;
    }
};