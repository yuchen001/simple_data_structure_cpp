#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    const int N = 5;
    int a[N] = {2, 4, 5, 1, 3};

    // 从小到大排序
    sort(a, a + N);
    for (int i = 0; i < N; ++i)
        cout << a[i] << " ";
    cout << endl;

    // 逆序排序
    sort(a, a + N, greater<int>());
    for (int i = 0; i < N; ++i)
        cout << a[i] << " ";
    cout << endl;

    // 字符串排序
    string b[N] = {"www", "algorithm", "racer", "text", "wait"};
    sort(b, b + N);
    for (int i = 0; i < N; ++i)
        cout << b[i] << " ";
    cout << endl;

    sort(b, b + N, greater<string>());
    for (int i = 0; i < N; ++i)
        cout << b[i] << " ";
    cout << endl;

    // 字符串向量排序
    vector<string> V = {"www", "algorithm", "racer", "text", "wait"};
    sort(V.begin(), V.end());
    for (const string &s : V)
        cout << s << " ";
    cout << endl;

    return 0;
}