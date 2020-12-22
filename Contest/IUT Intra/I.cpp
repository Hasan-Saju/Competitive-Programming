#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define ull         unsigned long long
#define pb          push_back
#define emb         emplace_back
#define mp          make_pair
#define ff          first
#define ss          second
#define vi          vector<int>
#define si          set<int>
#define pi          pair<int,int>
#define FOR(i,n)    for(int i=0;i<n;i++)

#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(a,min(b,min(c,d)))
#define max4(a,b,c,d)       max(a,max(b,max(c,d)))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define SP(x)       fixed<<setprecision(x)
#define fWrite      freopen("out.txt", "w", stdout);//to write the output in a txt file
#define fRead       freopen("in.txt", "r", stdin);
#define PI          2*acos(0.0)
#define asi         cout<<"Check"<<endl
#define bye         return 0
#define ok          cout<<"OK"<<endl
#define NL          "\n"

//lower_bound == Shoman othoba prothom boro element ta return korbe//iterator return kore
//upper bound mane first boro element return korbe
//string s(n,'a');
//ans+=string(r,'R');

ll Digits(ll a)
{
    return(floor(log10(a))+1);
}
ll BMod(ll B,ll P,ll M)
{
    ll R=1;
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
ll POW(ll  B,ll P)
{
    ll R=1;
    while(P)
    {
        if(P&1)
            R=R*B;
        B=B*B;
        P>>=1;
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

ll modee(string num, ll a)
{

	ll res = 0;

	for (ll i = 0; i < num.length(); i++)
		res = (res*10 + (ll)num[i] - '0') %a;

	return res;
}


string longDivision(string number, ll divisor)
{

	string ans;

	ll idx = 0;
	ll temp = number[idx] - '0';
	while (temp < divisor)
		temp = temp * 10 + (number[++idx] - '0');


	while (number.size() > idx) {

		ans += (temp / divisor) + '0';


		temp = (temp % divisor) * 10 + number[++idx] - '0';
	}

	if (ans.length() == 0)
		return "0";

	return ans;
}


string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
    return "0";


    vector<int> result(len1 + len2, 0);

    int i_n1 = 0;
    int i_n2 = 0;

    // Go from right to left in num1
    for (int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';


        i_n2 = 0;


        for (int j=len2-1; j>=0; j--)
        {

            int n2 = num2[j] - '0';


            int sum = n1*n2 + result[i_n1 + i_n2] + carry;


            carry = sum/10;


            result[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }


        if (carry > 0)
            result[i_n1 + i_n2] += carry;

        i_n1++;
    }

    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;


    if (i == -1)
    return "0";


    string s = "";

    while (i >= 0)
        s += std::to_string(result[i--]);

    return s;
}


string findSum(string str1, string str2)
{

    if (str1.length() > str2.length())
        swap(str1, str2);

    string str = "";

    int n1 = str1.length(), n2 = str2.length();

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;
    for (int i=0; i<n1; i++)
    {

        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');


        carry = sum/10;
    }

    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

       if (carry)
        str.push_back(carry+'0');

    reverse(str.begin(), str.end());

    return str;
}

int main()
{
    fast

    ll t;
    cin>>t;

    for(ll x=1;x<=t;x++)
    {

    ll n;
    string s;
    cin>>s;
    //cin>>n;

    string temp=longDivision(s,7);

    ll div=0;

    string sans;

    sans=multiply(temp,"9");

    ll mod=modee(s,7);

    sans=findSum(sans,to_string(mod));

    if(mod==4)
        sans=findSum(sans,"1");
    else if(mod>=5)
        sans=findSum(sans,"2");

    cout<<sans;
    if(x!=t)cout<<"\n";

    }


}

