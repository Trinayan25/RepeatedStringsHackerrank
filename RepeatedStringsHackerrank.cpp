//This code is contributed by Trinayan Das

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long k = s.size();
    long n;
    cin >> n;
    long i;
    long count = 0;
    long count2 = 0;
    long count3 = 0;
    
    long m = n - k;
    for( i = 0; i < s.size();i++)
    {
        cin >> s[i];
        if(s[i] == 'a')
        {
            count++;
        }
        
     
    }
    if(s[0] == 'a' && s.size() == 1)
        {
            cout << n;
        }
    else if(m < 0)
        {
            for(i = 0; i < n; i++)
            {
                if(s[i] == 'a')
                count3++;
            }
            cout << count3;
        }
    else
    {
        
        
        if(n-k == 0)
        cout << count;
        
        
        long f = (n-k)%k;
        long g =(n-k)/k;
        if(f == 0)
        {
            long req = count + g* count;
            cout << req;
        }
        if(f != 0)
        {
            long req2;
            for(i = 0; i < f; i++)
            {
                if(s[i] == 'a')
                count2++;
            }
            req2 = count + g* count + count2;
            cout << req2;
        }
    }
        return 0;
}
