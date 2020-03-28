#include<bits/stdc++.h>
using namespace std;
int checkCol[100],checkRow[100];
int x=0,y=0;
int main()
{

    int t,p,ans,i,j;
    cin>>t;
    int kase[t];
    for(p=0; p<t; p++)
    {


        int row,col,i,j,kount=0;
        cin>>row>>col;

        int maxc=0,maxr=0,indexr=0,indexc=0;


        char board[row][col];
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                cin>>board[i][j];
            }
        }

        for(i=0; i<row; i++)
        {
            kount=0;
            for(j=0; j<col; j++)
            {
                if(board[i][j]=='*')
                    kount++;
            }
            if(kount>=maxr)
            {
                maxr=kount;
                kount=0;
                indexr=i;
                checkRow[x]=i;
                x++;
            }

        }
        kount=0;

        for(j=0; j<col; j++)
        {
            kount=0;
            for(i=0; i<row; i++)
            {
                if(board[i][j]=='*')
                    kount++;
            }
            if(kount>=maxc)
            {
                maxc=kount;
                kount=0;
                indexc=j;
                checkCol[y]=j;
                y++;
            }

        }


        ans=row-maxc+col-maxr;


        for(i=0; checkCol[i]; i++)
        {
            for(j=0; checkRow[j]; j++)
            {
                if(board[i][j]=='.')
                    ans-=1;
            }

        }




//  if(board[indexr][indexc]=='.')ans-=1;


        kase[p]=ans;


    }

    for(p=0; p<t; p++)
        cout<<kase[p]<<"\n";

    cout<<endl;

    cout<<"HERE";

    for(i=0; checkCol[i]; i++)
    {
        cout<<checkCol[i]<<" ";
    }
    for(j=0; checkRow[j]; j++)
    {
        cout<<checkRow[j]<<" ";
    }



}
