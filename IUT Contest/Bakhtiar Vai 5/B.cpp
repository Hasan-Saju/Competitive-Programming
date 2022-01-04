#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while(scanf("%d",&n)!=EOF)
    {

        int i,op,val;
        queue<int>q;
        stack<int>s;
        priority_queue<int>pq;
        bool isS=true,isQ=true,isPQ=true;


        for(i=0; i<n; i++)
        {
            scanf("%d %d",&op,&val);
            switch(op)
            {
            case 1:
                if(isS)
                    s.push(val);
                if(isQ)
                    q.push(val);
                if(isPQ)
                    pq.push(val);
                break;

            case 2:
                if(isS)
                {
                    if(s.empty()||s.top()!=val)
                        isS=false;
                    else
                        s.pop();
                }
                if(isQ)
                {
                    if(q.empty()||q.front()!=val)
                        isQ=false;
                    else
                        q.pop();
                }
                if(isPQ)
                {
                    if(pq.empty()||pq.top()!=val)
                        isPQ=false;
                    else
                        pq.pop();
                }
            }
        }


        if(isS&&!isQ&&!isPQ)
            cout<<"stack"<<endl;
        else if(!isS&&isQ&&!isPQ)
            cout<<"queue"<<endl;
        else if(!isS&&!isQ&&isPQ)
            cout<<"priority queue"<<endl;
        else if(!isS&&!isQ&&!isPQ)
            cout<<"impossible"<<endl;
        else
            cout<<"not sure"<<endl;
    }
}

