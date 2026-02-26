#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    int cnt=0;
    while(n>0)
    {
        cnt++;
        n=n/10;
    }
    return cnt;
}
int countoptimized(int n)
{
    return floor(log10(n)+1);
}
int reverse(int n)
{
    int temp=0;
    while(n>0)
    {
        temp=10*temp+n%10;
        n=n/10;
    }
    return temp;
}
bool isPalindrome(int x) {
    int n=x;
    int temp = 0;
    while (x > 0) {
         if (temp > INT_MAX/10 ) {
            return 0;
        }
        temp = 10 * temp + x % 10;
        x = x / 10;
    }
    return temp==n;
}
int gcd(int n1,int n2)
{
	for(int i=(min(n1,n2)/2)+1; i>0; i--)
	{
		if(n1%i==0&& n2%i==0)
		{
			return i;
		}
	}
	return 1;
}
int optgcd(int a,int b)
{
	while(a>0&&b>0)
	{
	    if(a>b)
	    {
	        a=a%b;
	    }
	    else
	    {
	        b=b%a;
	    }
	}
	if(a==0)
	{
	    return b;
	}
	return a;
}
int armstrong(int n)
{
    int k=n,temp=0;
    
    while (n>0)
    {
        temp=temp+pow(n%10,3);
        n=n/10;
    }
    if(temp==k)
    {
        return 1;
    }
    return 0;
}
void printdivisor(int n)
{
    vector<int> v;
    for(int i=1;i<(n/2)+1;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
        }
    }
    v.push_back(n);
    for(auto it : v)
    {
        cout<<it<<", ";
    }
}
bool prime(int n)
{
	for(int i=2; i<=(n/2)+1; i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
void optdivisor(int n)
{
	int sqr=sqrt(n);
	set<int> v;
	for(int i=1; i<=sqr; i++)
	{
		if(n%i==0)
		{
			v.insert(i);
			if(i!=(n/i))
			{
				v.insert(n/i);
			}
		}
		
	}
	for(auto it : v)
	{
		cout<<it<<", ";
	}
}

int main() {
    cout<<count(1234)<<endl;
    return 0;
}