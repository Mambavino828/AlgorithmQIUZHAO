class Solution {
public:
    int nthUglyNumber(int n) {
        if(!n) return 0;
        vector<int> uglyNum(n,0);
        uglyNum[0]=1;
        int i,j,k=0;
        for(int index=1;index<n;index++)
        {
            int temp=min(uglyNum[i]*2,min(uglyNum[j]*3,uglyNum[k]*5));
            if(temp==uglyNum[i]*2) i++;
            if(temp==uglyNum[j]*3) j++;
            if(temp==uglyNum[k]*5) k++;
            uglyNum[index]=temp;
        }
        return uglyNum[n-1];
    }
};