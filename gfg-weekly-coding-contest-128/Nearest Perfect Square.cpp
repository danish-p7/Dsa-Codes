// Problem2  : https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-128/problems

long long nearestSquare(long long n)
{
    //Write Code Here
    long long x = n;
    long long sq = (long long)sqrt(x);
    long long a = sq*sq;
    long long b = (sq+1)*(sq+1);
    long long ans = abs(a-n);
    long long ans1 = abs(b-n);
    if(ans<ans1)return a;
    else if(ans == ans1)return max(a, b);
    else return b;
}
