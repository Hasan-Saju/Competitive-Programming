#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n;
    unsigned int i,mid,mid1,mid2;
    unsigned int x;
    scanf("%u",&n);

    if(n>45)
    {
        printf("YES");
        return 0;
    }

    vector<unsigned int> vec;

    for(i=0; i<n; i++)
    {
        scanf("%u",&x);
        vec.push_back(x);
    }

    sort(vec.begin(),vec.end());

    if(n%2!=0)
        mid=((n+1)/2)-1;
    else
    {
        mid1=(n/2)-1;
        mid2=(n/2)+1-1;

    }


    if(n%2!=0)
    {
        if(vec[mid]+vec[mid-1]>vec[mid+1]||vec[n-3]+vec[n-2]>vec[n-1]||vec[0]+vec[1]>vec[2])
        {
            printf("YES");
            // cout<<vec[mid]<<" "<<vec[mid-1]<<" "<<vec[mid+1];
            return 0;
        }
        else
        {
            printf("NO");
            return 0;
        }
    }
    else
    {
        if(vec[mid2]+vec[mid2-1]>vec[mid2+1]||vec[mid1]+vec[mid1-1]>vec[mid1+1]||vec[n-3]+vec[n-2]>vec[n-1]||vec[n-3]+vec[n-2]>vec[n-1]||vec[0]+vec[1]>vec[2])
        {
            printf("YES");
            return 0;
        }

        else
        {
            printf("NO");
            return 0;

        }
//    if(vec[0]+vec[1]>vec[n-1])printf("YES");
//    else printf("NO");

    }

//cout<<mid;
}
