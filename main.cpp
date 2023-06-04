#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,c,temp;
    unsigned long long s;
    c= 1;
    s=0;
//    freopen("input.txt","r",stdin);
    scanf("%d",&t);
    while(t--)
    {
        s=0;
        scanf("%d",&n);
        temp = n;
        temp--;
        for(int i =1 ; i<= temp; i++)
        {
            s+=i;
        }

        if(s%2==0)
        {
            printf("Case %d: %llu\n",c,s/2);
        }
        else
        {
            printf("Case %d: %llu/2\n",c,s);
        }

        c++;
    }
}

