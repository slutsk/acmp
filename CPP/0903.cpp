//Задача 903.Бисер
/*Если есть 1 цвет у бисера, то нужно вытянуть 2 бусины.
  В этом случае условие выполнено, есть 2 бусины одного цвета 
  Если есть бисер двух цветов, то в худшем случае вытягиваем две
  бусины разного цвета, но третья будет совпадать по цвету или
  с первой или со второй.
  Если есть n цветов, то в самом худшем случае вытягиваем n бусин, 
  каждая из которых разного цвета. Бисер n+1 совпадет по цвету с 
  одним из уже вытянутых. В ответ пишем n+1 
  Для решения задачи достаточно типа int32_t (int)
  */
#include <iostream>
int main()
{
    int32_t n;
    std::cin >> n;
    std::cout << n + 1;
}
