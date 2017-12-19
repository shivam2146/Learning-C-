#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    /*
    This is fine and will result in a speedup if you just use cin and cout,
    but if you mix that with stdio-style IO, then weird things happen.
    The question at http://codeforces.com/blog/entry/18093
    should clear up the side effects.
    Just a heads up.
    */
     
    int n, k, t;
    int cnt = 0;
    cin >> n >> k;
    for (int i=0; i<n; i++)
    {
        cin >> t;
        if (t % k == 0)
            cnt++;
    }
    cout << cnt << "\n";
    return 0;
}
