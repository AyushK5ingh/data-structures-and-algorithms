#include <iostream>
using namespace std;

int cnt=0;

void ntime()
{
    if(cnt==4)
    {
        return;
    }
    cout<<cnt<<endl;
    cnt++;
    ntime();
}
void ntime1(int n)
{
    if(n<=0)
    {
        return;
    }

    ntime1(n-1);

    cout<<n;
}
void ntime(int n,int i=1)
{
    if(i==n+1)
    {
        return;
    }
    cout<<i<<".ayush"<<n-i+1<<endl;
    ntime(n,i+1);
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        int temp=sum(n-1)+n;
        return temp;
    }
}
bool isPalindrome(string s) {
    int n = s.size();
    int i = 0, k = n - 1;

    while (i < k) {
        // Skip non-alphanumeric characters
        while (i < k && !isalnum(s[i])) {
            i++;
        }
        while (i < k && !isalnum(s[k])) {
            k--;
        }

        // Compare characters (case-insensitive)
        if (tolower(s[i]) != tolower(s[k])) {
            return false;
        }

        i++;
        k--;
    }

    return true;
}
int main()
{
    // ntime();
    ntime(5);
    cout<<sum(5)<<endl;
}