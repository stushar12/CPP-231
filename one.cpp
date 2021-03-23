#include<bits/stdc++.h>
using namespace std;

void abc(vector<int>v)
{
    int n=v.size();

    vector<pair<int,int>> sorted;
    for(int i=0;i<n;i++)
    {
        int copy=v[i];
        int count=0;
        int sum=0;
        while(copy!=0)
        {
            sum=sum+copy%10;
           // count++;
            copy=copy/10;
        }

        sorted.push_back({sum,v[i]});
    }
    sort(sorted.begin(),sorted.end());

    for(auto i:sorted)
        cout<<i.second<<" ";
}

int main()
{
    vector<int>v{12,10,102,31,15};

    abc(v);
}