#include <iostream>
using namespace std;

void FA(int x)
{
    x = 1;
}

void FB(int& x)
{
    x = 1;
}

void FC(const int& x)
{
    cout << x << endl;
}

int main(){
    int w = 0;
    FA(w);
    cout << "函数FA调用之后w = " << w << endl;

    FB(w);
    cout << "函数FB调用之后w = " << w << endl;

    FC(w);
}