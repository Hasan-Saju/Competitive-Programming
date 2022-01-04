//#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <queue>
#include <stack>
#include <sstream>
#include <cstring>
#include <numeric>
#include <ctime>
#include <cassert>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)
typedef pair<int,pair<int, int> > pi;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<pi, vector<pi>, greater<pi> > pq;
  //  priority_queue<pi, vector<pi>, greater<pi> >::iterator it;
    pair<int, pair<int, int> >top;
    int id,period,i,T;

    while(true)
    {
        string temp;
        cin>>temp;
        if(temp[0]=='#')
            break;
        cin>>id>>period;
        T=period;
        pq.push(make_pair(period,make_pair(id,T)));
    }

    int n;
    cin>>n;
    FOR(i,n)
    {
        top=pq.top();
        pq.pop();
        cout<<top.ss.ff<<endl;
        pq.push(make_pair(top.first+top.ss.ss,make_pair(top.ss.ff,top.ss.ss)));

    }




}

