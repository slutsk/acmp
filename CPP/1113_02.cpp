// 1113 Проверьте делимость
/*
     Eсли первое делится на второе или второе делится на первое, то 1
     Иначе 978654321
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a % b == 0 || b % a == 0) cout << 1;
    else cout << 978654321;
}


