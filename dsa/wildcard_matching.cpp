#include <bits/stdc++.h>
using namespace std;

#define lb lower_bound
#define ub upper_bound
#define sz(x) x.size()

#define ll long long
#define pint unsigned int
#define pb push_back
#define vb vector<bool>
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vi>
#define vvb vector<vb>
#define pii pair<int, int>
#define endl "\n"
#define nline cout << "\n"
#define print(x) cout << x << " "
#define trav(a) for (auto x : a)
#define trav2(a) for (auto y : a)
#define range(arr) arr.begin(), arr.end()
#define leftpoint "👈"
#define rightpoint "👉"
#define downpoint "👇"
#define uppoint "👆"
#define fire "🔥"
#define star "⭐"
#define smile "😃"
#define smile2 "👺"
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
                           "\n"
#define forn(i, start, n) for (auto i = start; i < n; i++)
#define io_faster                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

const int MOD = 1000000007;
double PI = 4 * atan(1);

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void solve()
{
    // string s("aa"),  p("*");
    string s("cb"), p("?a");
    int m = p.size(), n = s.size();
    s = " " + s;
    p = " " + p;
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (p[i] == '*')
            {
                dp[i][j] = dp[i - 1][j];
                deb(dp[i][j]);
                if (j != 0)
                    dp[i][j] = dp[i][j] or dp[i][j - 1];
            }
            else
            {
                if (p[i] == '?')
                {
                    if (j != 0)
                        dp[i][j] = dp[i - 1][j - 1];
                }
                else
                {

                    if (p[i] == s[j])
                        if (j != 0)
                            dp[i][j] = dp[i - 1][j - 1];
                }
            }
        }
    }
    linebreak1;
    trav(dp)
    {
        trav2(x) print(y);
        nline;
    }
    linebreak1;
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}