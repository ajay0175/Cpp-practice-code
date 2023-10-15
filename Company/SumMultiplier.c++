#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define ms multiset
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
#define setbits(x) __builtin_popcountll(x)
#define stp(x) fixed << setprecision(x)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define inf 1e18
#define mod 1000000007

typedef tree<vpii, null_type, less<vpii>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> mpbds;

// find_by_order(K): Returns an iterator to the Kth largest element (counting from zero)
// order_of_key (K): Return the number of items that are strictly smaller than k

template <typename T_vector>
void output_vector(const T_vector &v, bool line_break = false, bool add_one = false, int start = -1, int end = -1)
{
    if (start < 0)
        start = 0;
    if (end < 0)
        end = int32_t(v.size());
    for (int i = start; i < end; i++)
    {
        cout << v[i] + (add_one ? 1 : 0) << (line_break ? '\n' : i < end - 1 ? ' '
                                                                             : '\n');
    }
}

void io()
{
    fast

#ifndef ONLINE_JUDGE
        freopen("INPUT.txt", "r", stdin);
    freopen("OUTPUT.txt", "w", stdout);
#endif
}

bool SumMultiplier(const vector<int> &arr)
{
    int sum = 0;
    int n = arr.size();

    // Calculate the sum of all elements in the array
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // Iterate through the array and check for pairs with a product greater than 2 * sum
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] * arr[j] > 2 * sum)
            {
                return true;
            }
        }
    }

    return false;
}

void solve()
{
    vector<int> input1 = {2, 2, 2, 2, 4, 1};
    vector<int> input2 = {1, 1, 2, 10, 3, 1, 12};

    bool output1 = SumMultiplier(input1);
    bool output2 = SumMultiplier(input2);

    cout << boolalpha << output1 << endl; // Output: false
    cout << boolalpha << output2 << endl; // Output: true
}

int32_t main()
{

    io();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
    Company: Neebal
    Role: Fresher (Software Engineer)
    Level of question: Easy
*/