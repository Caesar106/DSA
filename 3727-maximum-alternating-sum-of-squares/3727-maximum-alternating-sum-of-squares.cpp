class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int mx = 0;
        for(int i=0;i<nums.size();i++){
            if(abs(nums[i])>mx){
                mx = abs(nums[i]);
            }
        }
        vector<int> cnt(mx+1,0);
        for(int x: nums) cnt[abs(x)]++;
        long long sum = 0;
        long long sub = 0;
        int y = nums.size();
        for(int i = 0;i<mx+1;i++){
            if(cnt[i]!=0){
                for(int j = 0;j<cnt[i];j++){
                    y--;
                if(nums.size()%2 == 0){
                    if(y>=nums.size()/2){
                        sub += i*i;
                    }
                    else{
                        sum += i*i;
                    }
                }
                if(nums.size()%2 != 0){
                    if(y>=(nums.size()+1)/2){
                        sub += i*i;
                    }
                    else{
                        sum += i*i;
                    }
                }

            }
        }
        


        /*for(int i = 0;i<mx+1;i++){
            if(nums.size()%2 == 0 ){
                if(y<=nums.size()/2 && cnt[i]>0){
                    sub += i*i*cnt[i];
                    y++;
                }
                else if(y>nums.size()/2 && cnt[i]>0){
                    sum += i*i*cnt[i];
                    y++;
                }
            }*/

        }
        return sum-sub;
    }
};