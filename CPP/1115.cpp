//1115 Дележ яблок
#include <iostream>
using namespace std;
int main()
{
    int sc, ap;
    cin >> sc >> ap;
    cout << ap / sc << " " << ap % sc << " ";
    if (ap % sc == 0) cout << 0;
    else cout << sc - ap % sc;
    
}


