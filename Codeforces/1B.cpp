#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define ff          first
#define ss          second
#define vi          vector<int>
#define si          set<int>
#define FOR(i,n)    for(int i=0;i<n;i++)
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define SP(x)       fixed<<setprecision(x)
#define fWrite      freopen("out.txt", "w", stdout);//to write the output in a txt file
#define fRead       freopen("in.txt", "r", stdin);
#define asi         cout<<"Check"<<endl
#define bye         return 0
#define ok          cout<<"OK"<<endl
//lower_bound == Shoman othoba prothom boro element ta return korbe//iterator return kore
//upper bound mane first boro element return korbe
//string s(n,'a');

ll Digits(ll a)
{
    return(floor(log10(a))+1);
}
int BMod(int B,int P,int M)
{
    int R=1;
    B=B%M;
    while(P)
    {
        if(P&1)
            R=(R*B)%M;
        P >>= 1;
        B=(B*B)%M;
    }
    return R;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
ll lcm(ll a,ll b)
{
    return a*b/gcd(a,b);

}

double koyDigit(double n)
{
    return ceil((log(n)/log(26)));
}

int main()
{
    fast
    int n,a=1;
    cin>>n;
    string refer="ZABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(int j=1;j<=n;j++ )
    {


        string s;
        cin>>s;

        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R' and isdigit(s[i+1]))flag=1;
            if(flag and s[i]=='C')flag=2;
        }
        if(flag==2)
        {
            string col="";
            for(int i=s.size()-1; i>=0;i--)
            {
                if(s[i]=='C')break;
                else col+=s[i];
            }
            reverse(col.begin(),col.end());

            string rowN="";
            for(int i=1;i<s.size();i++)
            {
                if(s[i]=='C')break;
                rowN+=s[i];
            }

            ll colN=0;
            int sizee=col.size()-1;

//            if(col.size()>0)
//            colN=stoi(col);

           // cout<<col<<endl;
            for(int i=0;i<col.size();i++,--sizee)
            {
               // cout<<colN<<" ";
                colN=colN+((col[i]-'0')*BMod(10,sizee,9999999));
                //cout<<colN<<" "<<col[i]-'0'<<" "<<sizee<<" "<<endl;
            }


            //cout<<colN<<endl;

            int dig=(int)koyDigit(colN);

            string ans="";

           // cout<<colN;
           int flag=0;
            while(colN!=0)
            {

                int vagshesh= colN%26;
                    if(vagshesh==0)vagshesh=26;
                    ans+=refer[vagshesh];

                colN-=vagshesh;
                if(colN==0)break;
                colN=colN/26;
                if(ans.size()==dig)break;
                flag=1;
            }
            reverse(ans.begin(),ans.end());
            string finalll=ans+rowN;
            //if(n==100000 and j==320 and finalll=="A999987" )cout<<s<<endl;
            //else
                cout<<ans<<rowN<<endl;

        }
        else
        {
            string Row="";
            string temp="";
            for(int i=0;i<s.size();i++)
            {
                if(isdigit(s[i]))Row+=s[i];
                else temp+=s[i];
            }
            //cout<<temp;
            int Ans=temp[0]-'A'+1;

            for(int i=1;i<temp.size();i++)
            {
                Ans= Ans*26;
                Ans+=temp[i]-'A'+1;
               // cout<<Ans<<" ";
            }
            cout<<"R"<<Row<<"C"<<Ans<<endl;
        }
        a++;
    }

}

