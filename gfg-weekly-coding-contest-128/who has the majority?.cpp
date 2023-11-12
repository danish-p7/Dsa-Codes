https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-128/problems

int majorityWins(int arr[], int n, int x, int y) {
        // code here
        map<int, int> mpp;
        for(int i =0; i<n; i++)mpp[arr[i]]++;
        if(mpp[x] == mpp[y])
        {
            if(x<y)return x;
            return y;
        }
        else if(mpp[x]>mpp[y])return x;
        return y;
    }
