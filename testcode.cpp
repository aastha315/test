#include <bits/stdc++.h>
using namespace std;
#define int long long int 
signed main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(x==1)
            ans.push_back(i);
        }
        if(ans.size()<m)
        {
            cout<<-1<<"\n";
            continue;
        }
        if(m==1)
        {
        	cout<<ans[0]<<"\n";
        	continue;
        }
        vector<int>distance;
        for(int i=1;i<ans.size();i++)
        {
            distance.push_back(ans[i]-ans[i-1]);
        }
        int sum=ans[0];
        int x=1;
        for(int i=0;i<m-1;i++)
        {
            sum+=(distance[i]*k*x);
            x++;
        }
        int cr=sum;
        x=1;
        vector<int>cm(distance.size());
        cm[0]=distance[0];
        
        for(int i=1;i<cm.size();i++)
            cm[i]+=cm[i-1]+distance[i];
        for(int i=m-1;i<distance.size();i++)
        {
            cr+=(distance[i]*k*(m-1))+ans[x]-ans[x-1]-k*(cm[i-1]-cm[x-1])-k*(distance[x-1]);
            sum=min(cr,sum);
            x++;
        }
        cout<<sum<<"\n";
        
    }
}