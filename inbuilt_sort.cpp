#include <bits/stdc++.h>
using namespace std;
// ye jo inbuilt algorithm c++ stl me use hota hai
// usko hum bolte hai introsort
// introsort 3 sorting alorithm ka mixture hai:
// 3  sortings are : quick sort , heap sort , insertion sort.
// introsort best sorting algorithm hai
int main()
{
    int n;
    cin >> n;

    // int a[n];
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    //  sort(a,a+n);
    // sort(a+2,a+n);

    //   sort(a.begin(),a.end());
    sort(a.begin() + 2, a.end());
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
