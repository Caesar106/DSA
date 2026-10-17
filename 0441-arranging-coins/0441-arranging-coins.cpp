class Solution {
public:
    int arrangeCoins(int n) {
        bool t = true;
        long long x = 1;
        while(t){
            if(n>=(x*(x+1))/2){
                x++;
            }
            else{
                t = false;
            }
        }

        return x-1;
    }
    
};