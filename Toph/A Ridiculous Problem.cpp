#include<bits/stdc++.h>
using namespace std;
string grid[7];
int main()
{
    int x=0,y=0,range=0,kount=0, j;
    string s;


    for(int i=0; i<7; i++)
    {
        cin>>grid[i];
    }

    range=grid[0].size();

   // cout<<range<<" ";

label:
    kount=0;
    for(int i=0+x; i<7; i++)
    {
        //j=0+y;

        for( j=0; j<5; j++)
        {
            if(grid[i+x][j+y]=='*')
                kount++;
        }
    }
  // cout<<j<<" ";
   // cout<<kount;
    if(kount==10)
        cout<<"Y";
    else  if(kount==16)
        cout<<"O";
    else  if(kount==20)
        cout<<"B";


    else if(kount==11&&grid[2+x][2+y]=='*'&&grid[6+x][4+y]=='*'&&grid[6+x][0+y]=='*'&&grid[0+x][0+y]=='*')
        cout<<"I";
    else if(kount==11&&grid[2+x][3+y]=='*')
        cout<<"J";
         else if(kount==11&&grid[2+x][2+y]=='*'&&grid[0+x][0+y]=='*'&&grid[6+x][4+y]=='.')
        cout<<"T";
    else if(kount==11&&grid[0+x][0+y]=='*'&&grid[6+x][4+y]=='*')
        cout<<"L";

    else if(kount==13&&grid[0+x][0+y]=='*'&&grid[0+x][4+y]=='*'&&grid[6+x][4+y]=='*')
        cout<<"X";
    else if(kount==13&&grid[0+x][0+y]=='.')
        cout<<"C";
    else if(kount==13&&grid[6+x][2+y]=='*'&&grid[0+x][0+y]=='*'&&grid[0+x][4+y])
        cout<<"V";
    else if(kount==14&&grid[0+x][0+y]=='*'&&grid[0+x][4+y]=='*'&&grid[3+x][4+y]=='.'&&grid[6+x][4+y]=='.')
        cout<<"F";

    else if(kount==14)
        cout<<"K";
    else if(kount==15&&grid[0+x][0+y]=='*'&&grid[0+x][4+y]=='*'&&grid[6+x][4+y]=='*'&&grid[3+x][2+y]=='*')
        cout<<"Z";
    else if(kount==15&&grid[0+x][0+y]=='*'&&grid[0+x][4+y]=='*'&&grid[6+x][4+y]=='*')
        cout<<"H";
    else if(kount==15&&grid[0+x][0+y]=='*'&&grid[0+x][4+y]=='.')
        cout<<"P";
    else if(kount==15&&grid[0+x][0+y]=='*'&&grid[0+x][4+y]=='*')
        cout<<"U";
    else if(kount==15&&grid[0+x][0+y]=='.'&&grid[0+x][4+y]=='*')
        cout<<"S";
    else if(kount==15&&grid[0+x][0+y]=='.'&&grid[0+x][4+y]=='.')
        cout<<"G";
    else if(kount==17&&grid[5+x][4+y]=='*'&&grid[6+x][4+y]=='.')
        cout<<"W";
    else if(kount==17&&grid[5+x][4+y]=='*')
        cout<<"N";
    else if(kount==17&&grid[5+x][4+y]=='.')
        cout<<"Q";
    else if(kount==18&&grid[0+x][0+y]=='.'&&grid[0+x][4+y]=='.'&&grid[6+x][4+y]=='*'&&grid[6+x][0+y]=='*')
        cout<<"A";

    else if(kount==18&&grid[0+x][0+y]=='*'&&grid[0+x][4+y]=='.'&&grid[6+x][4+y]=='.'&&grid[6+x][0+y]=='*')
        cout<<"D";



    else if(kount==18&&grid[0+x][0+y]=='*'&&grid[0+x][4+y]=='*'&&grid[6+x][4+y]=='*'&&grid[6+x][0+y]=='*'&&grid[3+x][1+y]=='*')
        cout<<"E";

    else if(kount==18&&grid[0+x][0+y]=='*'&&grid[0+x][4+y]=='*'&&grid[6+x][4+y]=='*'&&grid[6+x][0+y]=='*'&&grid[2+x][2+y]=='*')
        cout<<"M";

    else if(kount==18&&grid[0+x][0+y]=='*'&&grid[0+x][4+y]=='.'&&grid[6+x][4+y]=='*'&&grid[6+x][0+y]=='*'&&grid[5+x][3+y]=='*')
        cout<<"R";

//cout<<" "<<kount<<grid[0+x][0+y]<<" "<<y<<" "<<grid[0+x][4+y]<<endl;
    x=0;
    y=y+6;
    j++;

    if(y>range)
        return 0;
    goto label;





}

