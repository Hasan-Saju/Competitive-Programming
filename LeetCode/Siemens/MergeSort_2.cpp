#include<bits/stdc++.h>
using namespace std;


void mergee(vector<int>& arr, int left, int mid, int right)
{
    int n1 = mid-left+1;
    int n2 = right-mid;

    vector<int>l(n1), r(n2);

    for(int i=0; i<n1; i++)
        l[i] = arr[left+i];

    for(int j=0; j<n2; j++)
        r[j] = arr[mid+1+j];

    int i=0;
    int j=0;
    int k=left;

    while(i<n1 and j<n2)
    {
        if(l[i]<=r[j])
        {
            arr[k] = l[i];
            i++;
        }
        else
        {
            arr[k] = r[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        arr[k] = l[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k] = r[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>&arr, int left, int right)
{
    if(left>=right)
        return;
    int mid = (right-left)/2 + left;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    mergee(arr, left, mid, right);
}

int main()
{
    vector<int> arr = {38, 27, 43, 10};
    int n = arr.size();

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
