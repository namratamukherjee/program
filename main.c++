#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", , "w" stderr);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    // for singe test..
    // cin >> t;

    while (t--)
    {
        solve();
        // cout << "\n";
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
void solve()
{
    // take a input for lenght and width
    int a, b;
    scanf("%d %d", &a, &b);

    // clc area for rect
    int area = a * b;
    printf("%d", area);
}

// ctrl + /  -> for comment
// ctrl + shift + f -> to beautify
// ctrl + `  -> to open terminal in vs code .