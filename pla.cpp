#include <bits/stdc++.h>
using namespace std;
string c;
string k;
string s;
string o;
int n , a;
char tab[40];
bool vis[400];


void deszy()
{
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a;
        cout << tab[(a/10-1)*5+a%10-1];
    }
}

void szy()
{
    cin >> s;
    for(int i = 0 ; i < s.size() ; i++)
    {
        for(int akt = 0 ; akt <= 25 ; akt++)
        {
            if(tab[akt] == s[i])
            {
                cout << akt/5+1 <<  akt%5+1 << '\n';
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> c;
    cin >> k;
    
    int akt = 0;

    for(int i = 0 ; i < k.size() ;i++)
    {
        if(k[i] == 'j')k[i] = 'i';

        if(vis[k[i]] == 0)
        {
            tab[akt] = k[i];
            akt++;
            vis[k[i]] = 1;
        }
    }
    for(char a = 'a' ; a <= 'z' ; a++)
    {
        if(a == 'j')continue;
        if(vis[a] == 0)
        {
            tab[akt] = a;
            akt++;
            vis[a] = 1;
        }
    }

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
