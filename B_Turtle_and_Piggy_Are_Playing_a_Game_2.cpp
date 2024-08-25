#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        for(int i=1;i<n;i++)
        {
            if(i%2==1)
            {
            v[0]=max(v[0],v[1]);
            v.erase(v.begin() + 1);
            }
            else
            {
             v[0]=min(v[0],v[1]);
              v.erase(v.begin() + 1);
            }
        }
        cout<<v[0]<<endl;
    }
}