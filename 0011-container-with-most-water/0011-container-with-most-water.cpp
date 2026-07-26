class Solution {
public:
    int maxArea(vector<int>& height) {
        int x = 0;
        int y= height.size()-1;
        int a = 0;
        while(true){
             if(x>=y){
                break;
            }
            int z = min(height[x],height[y]);
            int area = z*abs(x-y);
            if(area> a){
                a = area ;
            }
            if(z == height[x]){
                x+=1;
                continue;
            }
            else{
                y-=1;
                continue;
            }
        }
        return a;
    }
};