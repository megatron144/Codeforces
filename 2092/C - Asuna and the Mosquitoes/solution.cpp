#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void test_cases() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
 
    int S = accumulate(arr.begin(), arr.end(), 0LL);
    int odd = count_if(arr.begin(), arr.end(), [](int x) { return x % 2; });
 
    if (odd == 0 || odd == n)
        cout << *max_element(arr.begin(), arr.end()) << "
";
    else
        cout << S - (odd - 1) << "
";
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
        test_cases();
    
    return 0;
}