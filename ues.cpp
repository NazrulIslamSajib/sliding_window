#include<bits/stdc++.h>
using namespace std;
long long i;
string s;
bool call(long long ok)
{
    long long a[4]={0};
    for(i=0;i<ok-1;i++)
    {
        long long yes=s[i]-'0';
        a[yes]++;
    }
    long long x=0;
    for(i=ok-1;i<s.size();i++)
    {
        long long yes=s[i]-'0';
        a[yes]++;
        if(a[1]>0 && a[2]>0 && a[3]>0)
        {
            return true;
        }
        long long katbo=s[x]-'0';
        a[katbo]--;
        x++;

    }
    return false;
}
int main()
{
    long long tt;
    cin>>tt;
    while(tt--)
    {
        cin>>s;
        long long l=3,r=s.size(),ans=0;
        while(l<=r)
        {
            long long mid=(l+r)>>1;
            if(call(mid))
            {
                ans=mid;
                r=mid-1;

            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
