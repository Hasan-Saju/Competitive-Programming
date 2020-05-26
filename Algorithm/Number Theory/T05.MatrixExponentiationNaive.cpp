#include<bits/stdc++.h>
using namespace std;

#define N 101
int ara[N][N], I[N][N];     //ara is for storing ans

void MatMul(int A[][N], int B[][N], int dim)
{
    int res[dim+1][dim+1];


    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim; j++)
        {
            res[i][j]=0;
            for(int k=1; k<=dim; k++)
                res[i][j] += A[i][k]*B[k][j];
        }
    }

    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim; j++)
        {
            A[i][j]=res[i][j];      //A er operation mane I er operation
        }
    }


}


void MatPow( int A[][N], int dim, int n)    //eikhane ar passs korsilam so A te ja hobe ta ara te hobe
{

    for(int i=1; i<=dim; i++)                   //Identity create
    {
        for(int j=1; j<=dim; j++)
        {
            if(i==j)
                I[i][j]=1;
            else
                I[i][j]=0;
        }
    }

//FOR(i,n)I=I*A

    for(int i=1; i<=n; i++)
        MatMul(I,A,dim);            //I=I*A;


     for(int i=1; i<=dim; i++)
            for(int j=1; j<=dim; j++)
                A[i][j]=I[i][j];            //A mane ara= ara te ans nei



}

void PrintMat(int A[][N], int dim)
{
    for(int i=1; i<=dim; i++)                   //Identity create
    {
        for(int j=1; j<=dim; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

///complexity Dim^3 * N

int main()
{
    int t,dim,n;            //dime - dimension  //n- power
    cin>>t;                 // test case
    while(t--)
    {
        cin>>dim>>n;

        for(int i=1; i<=dim; i++)
            for(int j=1; j<=dim; j++)
                cin>>ara[i][j];


        MatPow(ara,dim,n);
        PrintMat(ara,dim);
    }
}
