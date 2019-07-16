#include <iostream>
using namespace std;

template <typename T, typename iterator>
bool binary_search_iterator(const T &key, iterator L, iterator R)
{
    while (L < R)
    {
        iterator M = L + (R - L) / 2;
        if (key < *M)
            R = M;
        else if (*M < key)
            L = M + 1;
        else
            return true;
    }
    return false;
}