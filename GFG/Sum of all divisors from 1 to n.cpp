Question :- https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

long long sumOfDivisors(int N)
{
  long long ans = 0;
  for(int i=1; i<=N; i++)
  {
    ans += i*(N/i);
  }
  return ans;
}
