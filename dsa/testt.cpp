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
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
                           "\n"
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
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
    vector<int> v = {1, 2, 2, 1, 6};
    map<int, int> mp;
    for (auto x : v)
        mp[x]++;
    // trav(mp) print(x.first), print(x.second), nline;
    map<int, vi> mp2;
    for (auto x : mp)
    {
        mp2[x.second].push_back(x.first);
    }
    // linebreak1;
    // trav(mp2)
    // {
    //     print(x.first);
    //     trav2(x.second) print(y);
    //     nline;
    // }
    // linebreak1;
    vi ans;
    trav(mp2)
    {
        trav2(x.second) ans.push_back(y);
    }
    reverse(range(ans));
    linebreak1;
    trav(ans) print(x);
    linebreak1;

    vector<int> v = {1, 2, 2, 1, 6};
    map<int, int> mp;
    for (auto x : v)
        mp[x]++;
    map<int, vi> mp2;
    for (auto x : mp)
    {
        mp2[x.second].push_back(x.first);
    }
    vector<int> ans;
    for (auto x : mp2)
    {
        for (auto y : x.second)
            ans.push_back(y);
    }
    reverse(ans.begin(), ans.end());
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