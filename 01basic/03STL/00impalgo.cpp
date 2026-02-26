#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    if(p1.first<p2.first) return true;
    return false;
    //if the second element of the pair is same, sort it according to the first element of the pair in decending order
}

int a[1000],n;
void explainExtra()
{
    sort(a,a+n);
    vector<int> v = {3, 1, 2};
    sort(v.begin(), v.end());
    //sort() is used to sort the elements of the vector in ascending order
    sort(a, a+n, greater<int>());

    pair<int,int> p1[] = {{1,2},{2,1},{4,1}};    
    //sort it according to the second element of the pair in ascending order
    //if the second element is same, sort it according to the first element of the pair in decending order
    sort(p1, p1 + 3, comp);
    sort(a,a+n, comp);

    int num=6;
    int cnt = __builtin_popcount(num);

    long long int x = 1e18;
    int y = __builtin_popcountll(x);
    //__builtin_popcountll() is used to count the number of set bits in a long long int
    string s = "123";

    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    //next_permutation() is used to generate the next lexicographical permutation of the string
}
int main()
{
    
}