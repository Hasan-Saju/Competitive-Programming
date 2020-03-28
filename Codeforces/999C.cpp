#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,kount=0;
    int ara[26];
    memset(ara,0,sizeof(ara));
    char ch;
    cin>>n>>k;
    vector<char>v;
    vector<char>::iterator it;
    for(i=0; i<n; i++)
    {
        cin>>ch;
        v.push_back(ch);
        ara[ch-'a']+=1;
    }

    j=0;
    ch='a';
   label: if(ara[j]==0)
    {
        j++;ch++;
    }
    if(ara[j]==0)goto label;
    if(n==k)
    {
        cout<<endl;
        return 0;
    }
    else if(n-k==1)
        cout<<"z";
    else
    {
        for(i=0;; i++)
        {
            if(ara[j]==0)
            {
                goto label2;
            }
            if(ara[j]!=0)
            {
                ara[j]-=1;
            }

            it=find(v.begin(),v.end(),ch);
            v.erase(it);
            kount++;
            if(kount==k)
                break;

         label2:   if(ara[j]==0)
            {
                j++;
                ch++;
            }

        }

        // else
        for(it=v.begin(); it!=v.end(); it++)
            cout<<*it;
//else}
//cout<<endl<<v.size();
    }
}
