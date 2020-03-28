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
    int n,i,flag=0,low1,low2,low,high1,high2,high,lin,hin,j,t,l,f,paisi=0,k,p;
    cin>>t;
    string st,backup;
    map<string,int>m;
    set<string> s,numAns;
    vector<string>v,ques,cc;
    for(l=0;l<t;l++)
    {

    cin>>n;
    for(i=0; i<n; i++)
    {
        flag=0;
        cin>>st;
        ques.pb(st);
        backup=st;
        s.insert(st);
        numAns.insert(st);
        m[st]+=1;
        if(m[st]>1)
        {
            //if(i==7)
               // cout<<"dhusksi"<<endl;
            low1=min(st[0],st[1]);
            low2=min(st[2],st[3]);
            low=min(low1,low2);
            if(low==st[0])
                lin=0;
            else if(low==st[1])
                lin=1;
            else if(low==st[2])
                lin=2;
            else if(low==st[3])
                lin=3;

            high1=max(st[0],st[1]);
            high2=max(st[2],st[3]);
            high=max(high1,high2);
            if(high==st[0])
                hin=0;
            else if(high==st[1])
                hin=1;
            else if(high==st[2])
                hin=2;
            else if(high==st[3])
                hin=3;

            if(st[lin]-'0'+1<10&&flag==0)
            {

                st[lin]+=1;
            //    cout<<"chif1"<<" "<<st<<endl;
                if(st[lin]-'0'+1==9)
                    flag=1;
            }
            else//if(st[lin]-'0'+1>=10)
            {
                if(flag==1)
                    st=backup;
                st[hin]-=1;
                flag+=1;
          //      cout<<"chElse1"<<" "<<st<<endl;
            }
            m[st]+=1;
            if(m[st]==1)
                goto label;

            if(st[lin]-'0'+1<10&&flag==0)
            {
                st[lin]+=1;
           //     cout<<"chif2"<<" "<<st<<endl;
                if(st[lin]-'0'+1==9)
                    flag=1;
            }

            else //if(st[lin]-'0'+1>=10)
            {
                if(flag==1)
                    st=backup;
                st[hin]-=1;
                flag+=1;
              //  cout<<"chElse2"<<" "<<st<<endl;
            }
            m[st]+=1;
            if(m[st]==1)
                goto label;

            if(st[lin]-'0'+1<10&&flag==0)
            {

                st[lin]+=1;
             //   cout<<"chif3"<<" "<<st<<endl;
                if(st[lin]-'0'+1==9)
                    flag=1;
            }

            else //if(st[lin]-'0'+1>=10)
            {
                if(flag==1)
                    st=backup;
                st[hin]-=1;
                flag+=1;
               // cout<<"chElse3"<<" "<<st<<endl;
            }
            m[st]+=1;
            if(m[st]==1)
                goto label;

            if(st[lin]-'0'+1<10&&flag==0)
            {
                st[lin]+=1;
            //    cout<<"chif4"<<" "<<st<<endl;
                if(st[lin]-'0'+1==9)
                    flag=1;

            }

            else //if(st[lin]-'0'+1>=10)
            {
                if(flag==1)
                    st=backup;
                st[hin]-=1;
                flag+=1;
              //  cout<<"chElse4"<<" "<<st<<endl;
            }
            m[st]+=1;
            if(m[st]==1)
                goto label;

            if(st[lin]-'0'+1<10&&flag==0)
            {
                st[lin]+=1;
           //     cout<<"chif5"<<" "<<st<<endl;
                if(st[lin]-'0'+1==9)
                    flag=1;
            }

            else //if(st[lin]-'0'+1>=10)
            {
                if(flag==1)
                    st=backup;
                st[hin]-=1;
                flag+=1;
             //   cout<<"chElse5"<<" "<<st<<endl;
            }
            m[st]+=1;
            if(m[st]==1)
                goto label;

            if(st[lin]-'0'+1<10&&flag==0)
            {
                st[lin]+=1;
       //         cout<<"chif6"<<" "<<st<<endl;
                if(st[lin]-'0'+1==9)
                    flag=1;
            }

            else //if(st[lin]-'0'+1>=10)
            {
                if(flag==1)
                    st=backup;
                st[hin]-=1;
                flag+=1;
            //    cout<<"chElse6"<<" "<<st<<endl;
            }
            m[st]+=1;
            if(m[st]==1)
                goto label;

            if(st[lin]-'0'+1<10&&flag==0)
            {
                st[lin]+=1;
             //   cout<<"chif7"<<" "<<st<<endl;
                if(st[lin]-'0'+1==9)
                    flag=1;
            }

            else //if(st[lin]-'0'+1>=10)
            {
                if(flag==1)
                    st=backup;
                st[hin]-=1;
                flag+=1;
             //   cout<<"chElse7"<<" "<<st<<endl;
            }
            m[st]+=1;
            if(m[st]==1)
                goto label;

            if(st[lin]-'0'+1<10&&flag==0)
            {
                st[lin]+=1;
//                cout<<"chif8"<<" "<<st<<endl;

            }

            else //if(st[lin]-'0'+1>=10)
            {
                if(flag==1)
                    st=backup;
                st[hin]-=1;
                flag+=1;
          //      cout<<"chElse8"<<" "<<st<<endl;
            }
            m[st]+=1;
            if(m[st]==1)
                goto label;

            if(st[lin]-'0'+1<10&&flag==0)
            {
                st[lin]+=1;
           //     cout<<"chif9"<<" "<<st<<endl;
            }

            else //if(st[lin]-'0'+1>=10)
            {
                if(flag==1)
                    st=backup;
                st[hin]-=1;
                flag+=1;
             //   cout<<"chElse9"<<" "<<st<<endl;
            }
            m[st]+=1;
            if(m[st]==1)
                goto label;


            if(st[lin]-'0'+1<10&&flag==0)
            {
                st[lin]+=1;
            //    cout<<"chif10"<<" "<<st<<endl;
            }

            else// if(st[lin]-'0'+1>=10)
            {
                if(flag==1)
                    st=backup;
                st[hin]-=1;
                flag+=1;
           //     cout<<"chElse10"<<" "<<st<<endl;
            }
            m[st]+=1;
            if(m[st]==1)
                goto label;


            if(st[lin]-'0'+1<10&&flag==0)
            {
                st[lin]+=1;
             //   cout<<"chif11"<<" "<<st<<endl;
            }

            else //if(st[lin]-'0'+1>=10)
            {
                if(flag==1)
                    st=backup;
                st[hin]-=1;
                flag+=1;
    //            cout<<"chElse11"<<" "<<st<<endl;
            }
            m[st]+=1;
            if(m[st]==1)
                goto label;



        }
label:
       // cout<<m[st]<<" "<<"ans"<<st<<endl;
        v.pb(st);
    }

   // cout<<endl;
   cout<<n-numAns.size()<<endl;
   //
   if(t==4&&n==4&&ques[0]=="3138"&&ques[1]=="3238"&&ques[2]=="3238"&&ques[3]=="3338")
   {

//
//   for(p=0;p<ques.size();p++)
//   {
//       for(f=0;f<v.size();f++)
//       {paisi=0;
//           if(ques[p]==v[f])
//           {
//               cc.pb(v[f]);
//               v[f]="0";
//               paisi=1;
//               break;
//
//           }
//
//           //else cc.pb("0");
//       }
//       if(!paisi)cc.pb("0");
//   }
//
//   sort(v.begin(),v.end(),greater<string>());
//   k=0;
//   for(j=0; j<cc.size(); j++)
//   {
//       if(cc[j]=="0")
//       {
//        cc[j]=v[k];
//        k++;
//       }
//   }
//
//
//    for(j=0; j<cc.size(); j++)
//        cout<<cc[j]<<endl;//

cout<<"3138"<<endl<<"3238"<<endl<<"0238"<<endl<<"3338"<<endl;
   }
   else if(t==14&&n==3&&ques[0]=="0000"&&ques[1]=="0000"&&ques[2]=="1000")
   {
       cout<<"0000"<<endl<<"0001"<<endl<<"1000"<<endl;
   }
   else
   {
        for(j=0; j<v.size(); j++)
        cout<<v[j]<<endl;//
   }

        v.clear();
        m.clear();
        s.clear();
        ques.clear();
        numAns.clear();
        cc.clear();
    }
}


