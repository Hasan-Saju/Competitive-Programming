#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
#include<cstdlib>

using namespace std;
int main()
{
    int x,y,z,big,mid,low;
    string one,two,three;
    cin>>one>>two>>three;

    if(one==two&&two==three)
    {
        cout<<"0";
        return 0;
    }
    else if(one[1]==two[1]&&two[1]==three[1])
    {
        x=one[0]-'0';
        y=two[0]-'0';
        z=three[0]-'0';
        if(x>=y&&x>=z)
        {
            big=x;
            if(y>=z)
            {
                mid=y;
                low=z;
            }
            else
            {
                mid=z;
                low=y;
            }
        }

        else if(y>=x&&y>=z)
        {
            big=y;
            if(x>=z)
            {
                mid=x;
                low=z;
            }
            else
            {
                mid=z;
                low=x;
            }
        }
        else if(z>=x&&z>=y)
        {
            big=z;
            if(x>=y)
            {
                mid=x;
                low=y;
            }
            else
            {
                mid=y;
                low=x;
            }
        }
        // cout<<big<<"\n"<<mid<<"\n"<<low<<"\n";
        if(big-mid==1&&mid-low==1)
        {
            cout<<"0";
            return 0;
        }
    }

    if(one==two||two==three||three==one)
    {
        cout<<"1";
        return 0;
    }
    else if(one[1]==two[1]&&abs(one[0]-two[0])==1||two[1]==three[1]&&abs(two[0]-three[0])==1||three[1]==one[1]&&abs(three[0]-one[0])==1||one[1]==two[1]&&abs(one[0]-two[0])==2||two[1]==three[1]&&abs(two[0]-three[0])==2||three[1]==one[1]&&abs(three[0]-one[0])==2)
    {
        x=one[0]-'0';
        y=two[0]-'0';
        z=three[0]-'0';
        if(x>=y&&x>=z)
        {
            big=x;
            if(y>=z)
            {
                mid=y;
                low=z;
            }
            else
            {
                mid=z;
                low=y;
            }
        }

        else if(y>=x&&y>=z)
        {
            big=y;
            if(x>=z)
            {
                mid=x;
                low=z;
            }
            else
            {
                mid=z;
                low=x;
            }
        }
        else if(z>=x&&z>=y)
        {
            big=z;
            if(x>=y)
            {
                mid=x;
                low=y;
            }
            else
            {
                mid=y;
                low=x;
            }
        }
        // cout<<big<<"\n"<<mid<<"\n"<<low<<"\n";
        if(big-mid==1||mid-low==1||big-low==1||big-mid==2||mid-low==2||big-low==2)
        {
            cout<<"1";
            return 0;
        }
    }

    //last condition
   /* else
    {


        x=one[0]-'0';
        y=two[0]-'0';
        z=three[0]-'0';
        if(x>=y&&x>=z)
        {
            big=x;
            if(y>=z)
            {
                mid=y;
                low=z;
            }
            else
            {
                mid=z;
                low=y;
            }
        }

        else if(y>=x&&y>=z)
        {
            big=y;
            if(x>=z)
            {
                mid=x;
                low=z;
            }
            else
            {
                mid=z;
                low=x;
            }
        }
        else if(z>=x&&z>=y)
        {
            big=z;
            if(x>=y)
            {
                mid=x;
                low=y;
            }
            else
            {
                mid=y;
                low=x;
            }
        }*/

        //if(big-mid==1||mid-low==1||big-low==1)cout<<"1";

     /*  if(one[0]!=two[0]&&two[0]!=three[0]&&three[0]!=one[0]&&one[1]!=two[1]&&(abs(one[0]-two[0])!=1)&&two[1]!=three[1]&&(abs(two[0]-three[0])!=1)&&three[1]!=one[1]&&(abs(three[0]-one[0])!=1))
        {
            cout<<3;
            return 0;
        }*/
              cout<<2;
            return 0;


    }





