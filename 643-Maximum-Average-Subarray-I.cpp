class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;
        int l=0;
        int r=k-1;
        for(int i=0;i<=r;i++){
            sum+= nums[i];
        }
     double maxAvg=(sum)/k;
        while(r<n-1){
            sum=sum-nums[l];
            l++;
            r++;
            sum=sum+nums[r];
            double avg=(sum)/k;
            maxAvg=max(maxAvg,avg);
        }
        return maxAvg;
    }
};