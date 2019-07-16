#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    const int n = 42;
    const int c = 1;

    // int A1[n];
    // 先创建在初始化
    vector<int> V1(n);

    for (int i = 0; i < n; ++i)
        V1[i] = c;

    // 统一初始化
    vector<int> V2(n, c);

    vector<int> V3 = {1, 2, 3, 4, 5};

    for (size_t i = 0; i < V1.size(); ++i)
        cout << V1[i] << " ";
    cout << endl;

    for (size_t i = 0; i < V2.size(); ++i)
        cout << V2[i] << " ";
    cout << endl;

    for (size_t i = 0; i < V3.size(); ++i)
        cout << V3[i] << " ";
    cout << endl;

    V3.push_back(6);
    cout << V3.size() << endl;
    cout << "V3向量进行push_back后：" << endl;
    cout << "front: " << V3.front() << " "
         << "back:" << V3.back() << endl;

    // 迭代器
    cout << "V3用迭代器赋值后：" << endl;
    for (auto iter = V3.begin(); iter != V3.end(); iter++)
    {
        *iter = c;
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}
