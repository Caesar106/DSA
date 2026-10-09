#include <string>
#include <vector>
class Solution {
public:
    int minInsertions(string s) {
        int x = 0;
        int in = 0;
        int size = s.size();
        for(int i=0; i < size; i++){
            if(s[i]=='('){
                x++;
            }
            else{
                if(i+1 < size && s[i+1]==')'){
                    i++;
                }
                else{
                    in++;
                }
                 if (x>0){
                    x--;
                }
                else{
                    in++;
                }
            } 
        }
       
        in += x*2;
        
        return in;
    }
};