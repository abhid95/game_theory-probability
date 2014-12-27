/*
We need to solve this  problem dynamically meaning building the solution for A[i] based on the previous findings. Let us have an array A where A[i] shows the answer for i coins. The array is a boolean array where "true" means that the first player won and "false" means that the second player won. Initially a[1]=true becasue if there is only 1 coin then the winner is the first one for sure and let us have a[0]=false meaning that second one wins when there are no coins at all because the first one can't make a move. Now for every next I if A[i-1] is false then for sure a[i] is going to be true. (because if there are B coins and the winner is the second that means that when there are B+1, B+L, or B+K coins the winner will be the first because we are kind of adding one more move to the total game which changes the outcome).
*/

#include <bits/stdc++.h>
#define MAX 1000000007
#define pb push_back
#define mp make_pair
#define FOR(n) for(i=0;i<n;i++)
#define rep(i,n) for(i=0;i<n;i++)
#define reps(i,a,b) for(i=a;i<=b;i++)
#define swap(a,b) T=a,a=b,b=T
#define ll long long int
#define que queue<int>
#define s(t) scanf("%lld",&t)
#define p(t) printf("%lld\n",t)
using namespace std;

bool gt[1000006];
int main()
{
ll i,j,l,n,m,t,T,f,p,ans,cnt,par,ele,k,num;
char x;
s(k);
s(l);
s(n);
gt[0]=0;
for(i=1;i<1000001;i++)
{
    gt[i]=!gt[i-1];
    if(i-k>=0 && !gt[i-k]) gt[i]=1;
    if(i-l>=0 && !gt[i-l]) gt[i]=1;
}
while(n--)
{
    s(num);
    if(gt[num])
        printf("A");
    else
        printf("B");
}

return 0;
}



