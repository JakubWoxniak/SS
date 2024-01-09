#include <bits/stdc++.h>
using namespace std;
string c;
string k;
string s;
string o;

void deszy()
{
    for(int i = 0 ; i < s.size() ; i++)
    {
        o += ((s[i] - k[i%k.size()] + 26)%26 + 'a');
    }    
    cout << o;
}

void szy()
{
    for(int i = 0 ; i < s.size() ; i++)
    {
        o += ((s[i] + k[i%k.size()] -'a' - 'a' + 26)%26 + 'a');
    }  
    cout << o;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> c;
    cin >> k;
    cin >> s;

    if(c[0] == 'D' || c[0] == 'd' || c[0] == ';')
    {
        deszy();
    }
    else 
    {
        szy();
    }


    return 0;
}
