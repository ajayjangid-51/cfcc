#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
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
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak cout << "_______________________________" \
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
    // int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = 3;
    int arr[n] = {0, 1, 0};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            arr[i] = 1;
        else if (arr[i] == 1)
        {
            arr[i] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        print(arr[i]);
    }
    nline;
    int maxi = 0;
    int sum_upto_i = 0;
    int start = 0;
    int end = 7;

    for (int i = 0; i < n; i++)
    {
        print(arr[i]);
        nline;
        sum_upto_i = sum_upto_i + arr[i];
        if (maxi < sum_upto_i)
        {

            maxi = sum_upto_i;
            end = i;
        }
        if (sum_upto_i < 0)
        {

            sum_upto_i = 0;
        }
    }
    int sum = maxi;
    int j = end;
    linebreak;
    while (j >= 0)
    {
        deb(j);
        deb(sum);
        sum -= arr[j];
        if (sum == 0)
            start = j;
        j--;
    }

    debline(maxi);
    print(j);
    deb(start);
    print(end);
    nline;
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