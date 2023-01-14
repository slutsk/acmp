//1109. Следующее и предыдущее
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << "The next number for the number " << n
        << " is " << n + 1 <<".\n";
    cout << "The previous number for the number " << n
        << " is " << n-1 <<".";
}

/*
    Оращаем внимание на выражение "абсолютная величина" (математический модуль), 
    т.е. число может быть отрицательным и, по условию, принадлежать промежуту
    от -1000 до 1000

 */
