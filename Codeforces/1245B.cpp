#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,j;
    cin>>t;
    for(j=0; j<t; j++)
    {


        int n,aRock,bPaper,cScissor,rock=0,paper=0,scissor=0,i,aWin,con,extraR=0,extraP=0,extraS=0;

        string str;
        cin>>n>>aRock>>bPaper>>cScissor>>str;
        for(i=0; i<str.size(); i++)
        {
            if(str[i]=='R')
                rock++;
            else if(str[i]=='P')
                paper++;
            else if(str[i]=='S')
                scissor++;
        }
        aWin=min(rock,bPaper)+min(paper,cScissor)+min(scissor,aRock);
        if(n%2==0)
            con=n/2;
        else
            con=(n/2)+1;
//        if(aRock>rock)
//            extraR=aRock-rock;
//        if(bPaper>paper)
//            extraP=bPaper-paper;
//        if(cScissor>scissor)
//            extraS=cScissor-scissor;

        if(2*aWin>=n)
        {
            cout<<"YES"<<endl;
            for(i=0; i<str.size(); i++)
            {
                if(str[i]=='R')
                {
                    rock--;
                    if(bPaper>0)
                    {
                        cout<<"P";
                        bPaper--;
                    }
                    else if(bPaper==0)
                    {
                        if(aRock>scissor)
                        {
                            cout<<"R";
                            aRock--;
                        }
                        else if(cScissor>paper)
                        {
                            cout<<"S";
                            cScissor--;
                        }

                    }



                }

                else if(str[i]=='P')
                {
                    paper--;
                    if(cScissor>0)
                    {
                        cout<<"S";
                        cScissor--;
                    }

                    else   if(cScissor==0)
                    {
                         if(aRock>scissor)
                        {
                            cout<<"R";
                            aRock--;
                        }
                        else if(bPaper>rock)
                        {
                            cout<<"P";
                            bPaper--;
                        }

                    }


                }
                else if(str[i]=='S')
                {
                    scissor--;
                    if(aRock>0)
                    {
                        cout<<"R";
                        aRock--;

                    }
                    if(aRock==0)
                    {
                         if(bPaper>rock)
                        {
                            cout<<"P";
                            bPaper--;
                        }
                         else if(cScissor>paper)
                        {
                            cout<<"S";
                            cScissor--;
                        }
                    }


                }
            }
            cout<<endl;

        }
        else
            cout<<"NO"<<endl;


    }


}
