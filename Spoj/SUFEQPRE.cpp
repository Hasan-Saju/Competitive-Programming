#include<bits/stdc++.h>
using namespace std;

string str;
int z[2000005];

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fWrite      freopen("out.txt", "w", stdout);

void calc_z()
{
    int L = 0;
    int R = 0;
    int i = 0;
    z[0] = 0;

    for(int i=1; i<str.size(); i++)
    {
        if(i>R)
        {
            L = i;
            R = i;
             //int in = 0;
            while(str[R] == str[R-L] && R<str.size())
                R++,in++;
            z[i] = R - L;
            R--;
        }
        else
        {
            int k = i - L;
            if(z[k]< R - i + 1)
                z[i] = z[k];
            else
            {
                L = i;
               // int in = 0;
                while(str[R]==str[R-L] && R<str.size())
                    R++,in++;
                z[i] = R - L;
                R--;
            }
        }
    }
}
int main()
{
    //fWrite
    fast
    int t;
    cin>>t;
    for(int y=1; y<=t; y++)
    {
        int kount=0;
        string pat;
        //char pat[2000005];
        cin>>pat;
        //scanf("%s",pat);

        str = pat;
        calc_z();
        for(int i=1; i<str.size(); i++)
        {
            //cout<<z[i]<<" ";
            if(z[i] and i+z[i]==str.size())
            {
                kount++;
            }
        }

       // cout<<"\n"<<str<<"\n";
        cout<<"Case "<<y<<": "<<kount<<"\n";
        memset(z,0,sizeof(z));
    }

}
