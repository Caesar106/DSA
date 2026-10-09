class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n;
        int sum = 0;
        int product = 1;

        while(x>0){
            sum += x%10;
            product *= x%10;
            x = x/10;
        }

        return !(n%(sum + product));
    }
};