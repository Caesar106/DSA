#include <string>
#include <vector>
class Solution {
public:
    int minInsertions(string s) {
        int y = 0;
        int in = 0;
        vector<char> stack = {};
        int size = s.size();
        for(int i=0; i < size; i++){
            if(s[i]=='('){
                stack.push_back('(');
            }
            if(s[i]==')'){
                y ++;
            }
            if(y == 1 && s[i+1] != ')'){
                if(stack.empty()!=true){
                    in++;
                    stack.pop_back();
                }
                else{
                    in += 2;
                }
                y = 0;
            }
            if(y == 2){
                if(stack.empty()==true){
                    in +=1;
                }
                else{
                    stack.pop_back();
                }
                y = 0;

            }

        }
       
        in += stack.size()*2;
        


        return in;
    }
};