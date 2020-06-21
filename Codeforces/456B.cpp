#include<bits/stdc++.h>
using namespace std;

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    fast
    string s;
    cin>>s;

    int siz=s.size();

    int one=1,two=0,three=0,four=0;

    int last=s[siz-1]-'0';
    int lastTwo= (s[siz-2]-'0')*10 + s[siz-1]-'0';
    if(s.size()<2)lastTwo=last;

    if(lastTwo%4==1)
    {
        two=2;
        three=3;
    }
    else if(lastTwo%4==2)
    {
        two=4;
        three=4;
    }
    else if(lastTwo%4==3)
    {
        two=3;
        three=2;
    }
    else if(lastTwo%4==0)
    {
        two=1;
        three=1;
    }

    if(last%2==1)
    {
        four=4;
    }
    else
        four=1;

    cout<<(one+two+three+four)%5;
}
/*
                        1

        pow pattern      2 4 8 6
		mod pattern 	 2 4 3 1

		pow pattern	 3 9 7 1
		mod pattern	 3 4 2 1

		pow pat	 4 6
		mod pat  4 1

		*/
