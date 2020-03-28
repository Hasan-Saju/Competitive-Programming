
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
    int t,i,flag=0,in=0;
    char ch[]="22233344455566677778889991";
    char num[1000];

    string temp;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        map<string,int>m;
        map<string,int>::iterator it;
        getchar();
        flag=0;

        //   cin>>n;
        while(n--)
        {
            getline(cin,temp);
            in=0;
            for(i=0; i<temp.size(); i++)
            {
                if(temp[i]>='0'&&temp[i]<='9')
                {
                    num[in++]=temp[i];
                }
                else if(temp[i]>='A'&&temp[i]<='Z')
                {
                    num[in++]=ch[temp[i]-'A'];
                }
                if(in==3)
                    num[in++]='-';

            }
            num[in]='\0';
            // cout<<num<<"hgh"<<endl;
            m[num]+=1;
        }
        for(it=m.begin(); it!=m.end(); it++)
        {
            //  cout<<it->first<<" "<<it->second<<endl;
            if((it->second)!=1)
            {
                flag=1;
                cout<<it->first<<" "<<it->second<<endl;
            }
        }
        if(!flag)
            puts("No duplicates.");
        if(t)
            puts("");


//        if(!flag)
//            cout<<"No duplicates.";
//
//
//       if(t) puts("");
      //  m.clear();

    }


}
