#include <iostream>
#include <ctime>
using namespace std;

const int n = 64;
int x = 4;
int y = 2;

void judge(int **arr)
{
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i == j)
                arr[i][j] = x;
            else
                arr[i][j] = y;
}

void overall_to_local(int **arr)
{
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; j++)
            arr[i][j] = y;
    for (int i = 0; i < n; ++i)
        arr[i][i] = x;
}

void expand(int **arr)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
            arr[i][j] = y;
        arr[i][i] = x;
        for (int j = i + 1; j < n; ++j)
            arr[i][j] = y;
    }
}

void arr_print(int **arr)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << arr[i][j];
        cout << endl;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    clock_t binge, end;

    int **M1 = new int *[n];
    for (int i = 0; i <= n; ++i)
        M1[i] = new int[n];

    // 判断法
    binge = clock();

    cout << "判断法：" << endl;
    judge(M1);
    arr_print(M1);

    end = clock();

    delete[] M1;

    cout << "耗时：" << (end - binge) << "微秒" << endl;

    int **M2 = new int *[n];
    for (int i = 0; i <= n; ++i)
        M2[i] = new int[n];

    // 整体到局部
    binge = clock();

    cout << "整体到局部：" << endl;
    overall_to_local(M2);
    arr_print(M2);

    end = clock();

    delete[] M2;

    cout << "耗时：" << (end - binge) << "微秒" << endl;

    int **M3 = new int *[n];
    for (int i = 0; i <= n; ++i)
        M3[i] = new int[n];

    // 展开法
    binge = clock();

    cout << "展开法：" << endl;
    expand(M3);
    arr_print(M3);

    end = clock();
    cout << "耗时：" << (end - binge) << "微秒" << endl;

    delete[] M3;
    return 0;
}