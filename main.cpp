/*Вариант 15. Определить, сколько раз стоящие рядом два слова в тексте начинаются на одну и ту же букву.*/


#include <iostream>

using namespace std;

void input(string *s, int &n)
{
    int i = 0;
    string x;
    cin >> x;
    while ( x != "." )
    {
        s[i++] = x; cin >> x; n++;
    }
}

void output(string *s, int n)
{
    int i = 0;
    while ( i < n )
        cout << s[i++] << " ";
}

bool check(string x, string y)
{
    if ( x[0] == y[0] )
        return true;
    else
        return false;
}

int serch(string *s, int n)
{
    int i, k = 0;
    for ( i = 1; i < n; ++i )
        if ( check(s[i-1], s[i] ) )
            k++;
    return k;
}

int main()
{
    int n = 0;
    string s[1000];
    input(s, n);
    cout << serch(s, n) << endl;
    return 0;
}
