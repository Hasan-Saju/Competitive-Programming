#include<bits/stdc++.h>
using namespace std;
vector<int>V;

void bubbleSort()
{
    int sizee=V.size();
    for(int step=0;step<sizee-1;step++)
    {
        for(int i=0;i<sizee-1-step;i++)
        {
            if(V[i]>V[i+1])
            {
                int temp=V[i];
                V[i]=V[i+1];
                V[i+1]=temp;
            }
        }
    }

}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        V.push_back(x);
    }
    bubbleSort();
    for(int i=0;i<n;i++)
        cout<<V[i]<<" ";
}
