#include <iostream>

using namespace std;
int s[20],n,k;
void init()
{
    s[k]=0;
}
int am_succesor()
{
    if(s[k]<n) {
        s[k]++;
        return 1;
    }
    return 0;
}
int solutie()
{
    return k==n;
}
int e_valid()
{
    int i;
    for(i=1;i<k;i++) if(s[i]==s[k]) return 0;
    return 1;
}
void tipar()
{
    int i;
    for(i=1;i<=k;i++) cout<<s[i]<<' ';
    cout<<'\n';
}
void back()
{

    int as;
    k=1;
    init();
    while(k>0)
    {
        do{}while((as=am_succesor())&&!e_valid());
            if(as)
            {if(solutie()) tipar();
            else {k++; init();}
            }
            else k--;
    }
}
int main()
{
    cin>>n;
    back();
}
