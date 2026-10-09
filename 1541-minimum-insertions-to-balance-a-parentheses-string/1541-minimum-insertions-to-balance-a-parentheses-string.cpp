#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int minInsertions(string s) {
        int in = 0;
        int x = 0;
        int y = 0;
        int size = s.size();
        for(int i=0; i < size; i++){
            if(s[i] == '('){
                x ++;
                cout<<"1";
            }
            if(s[i]== ')'){
                y++;
                cout<<"2";
            }
            if(y == 1 && s[i+1] != ')'){
                 cout<<"3";
                if(x != 0){
                    in++;
                    x--;
                    cout<<"a";
                }
                else if( x == 0){
                    in++;
                    in++;
                    if(x != 0){
                        x--;
                    }
                    cout<<"b";
                }
                y = 0;
            }
            if(y == 2){
                 cout<<"4";
                 if(x != 0){
                    x--;
                    cout<<"c";
                }
                else if( x == 0){
                    in++;
                    cout<<"d";
                }
                y = 0;
            }
            
            


        }
        if(x != 0){
                in += x*2;
                x = 0;
            }
        


        return in;
    }
};