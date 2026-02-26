#include<bits/stdc++.h>
using namespace std;

void print1(int n=4)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cout<<"* ";
        }
        cout<<endl;
    }
}
void print2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print3(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
}
void print4(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
}
void print5(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print6(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
}
void print7(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*n-1-2*i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print9(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*n-1-2*i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print10(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<i+1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int k=0;k<n-1-i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print11(int n)
{
    bool k=1;
    for(int i=0;i<n;i++)
    {
        if (i%2==0) k=1;
        else k=0;
        for(int j=0;j<i+1;j++)
        {
            cout<<k;
            k=!k;
        }
        cout<<endl;
    }
}
void print11altr(int n)
{
    int start=1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0) start=1;
        else start=0;
        for (int j=0;j<=i;j++)
        {
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
void print12(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<i+1;k++)
        {
            cout<<k+1;
        }
        for(int l=0;l<2*(n-1-i);l++)
        {
            cout<<" ";
        }
        for(int m=i+1;m>0;m--)
        {
            cout<<m;
        }
        cout<<endl;
    }
}
void print13(int n)
{
    int k=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<k;
            cout<<" ";
            k++;
        }
        cout<<endl;
    }
}
void print14(int n)
{
    for(int i=0;i<n;i++)
    {
        char k='A';
        for(int j=0;j<i+1;j++)
        {
            cout<<k;
            cout<<" ";
            k++;
        }
        cout<<endl;
    }
}
void print15(int n)
{
    for(int i=0;i<n;i++)
    {
        char k='A';
        for(int j=0;j<n-i;j++)
        {
            cout<<k;
            cout<<" ";
            k++;
        }
        cout<<endl;
    }
}
void print16(int n)
{
    char k='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<k;
            cout<<" ";
        }
        cout<<endl;
        k++;
    }
}
void print17(int n)
{
    for(int i=0;i<n;i++)
    {
        char X='A';
        for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<i+1;k++)
        {
            cout<<X;
            X++;
        }
        X--;
        for(int l=0;l<i;l++)
        {
            X--;
            cout<<X;
        }
        cout<<endl;
    }
}
void print18(int n)
{
    for(int i=0;i<n;i++)
    {
        char k='A';
        k=k+n-i-1;
        for(int j=0;j<i+1;j++)
        {
            cout<<k;
            cout<<" ";
            k++;
        }
        cout<<endl;
    }
}
void print19(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<2*(i);k++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<n-i-1;k++)
        {
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print20(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<(n-i-1);k++)
        {
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<i+1;k++)
        {
            cout<<"  ";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print21(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0||i==0||i==n-1||j==n-1)
            {
                cout<<"*";
            }
            else{cout<<" ";}
        }
        cout<<endl;
    }
}
int min(int a, int b, int c, int d) {
    int minVal = a;

    if (b < minVal) minVal = b;
    if (c < minVal) minVal = c;
    if (d < minVal) minVal = d;

    return minVal;
}

void print22(int n)
{
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // Calculate minimum distance to edges
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int min_dist = min(top, bottom, left, right);

            cout << (n - min_dist) << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin>>n;
    print22(n);
}