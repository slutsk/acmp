/* 0003  Пятью пять - двадцать пять!
*В задаче много текста, но основная идея задачи взять число
* и возвести его в квадрат.
* ОБРАТИТЬ ВНМАНИЕ, что на вход может поступить число 10^5. Если такое число
* возвести в квадрат, то получится 10^10, а это больше, чем можно поместить в int (int32_t)
* Исползуем long long (int64_t)
*/
#include <iostream>
using namespace std;
int main()
{
    long long a;  // int a;
    cin >> a;     // cin >> a;
    cout << a*a;  // cout << (int64_t) a * a;
}


