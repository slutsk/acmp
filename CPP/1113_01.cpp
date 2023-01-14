// 1113 Проверьте делимость
/*
     Eсли первое делится на второе, то 1
     Если второе делится на первое, то 1
     Иначе 978654321
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a % b == 0) cout << 1;
    else if (b % a == 0) cout << 1;
    else cout << 978654321;
}


