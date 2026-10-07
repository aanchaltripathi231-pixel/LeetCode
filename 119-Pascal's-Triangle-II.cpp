class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex+1;
        long long ans=1;
        vector<int>ansRow;
        ansRow.push_back(1);
        for(int i=1;i<n;i++){
            ans=ans*(n-i);
            ans=ans/(i);
            ansRow.push_back(ans);
        }
        return ansRow;
    }
};