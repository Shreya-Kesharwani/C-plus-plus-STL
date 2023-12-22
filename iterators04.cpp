#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5};
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    vector<pair<int, int>> v_p = {{1, 2}, {3, 4}, {5, 6}};
    for (auto &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }
    return 0;
}