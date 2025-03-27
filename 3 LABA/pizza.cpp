/**
 * @file PizzaPalace.cpp
 * @brief Программа для автоматического заказа в пиццерии
 * @author Nikita
 * @version 1.0
 * @date 2025-03-27
 */

 #include <iomanip>
 #include <iostream>
 using namespace std;
 
 // Цены блюд
 const double PIZZA = 15.50;          ///< Цена пиццы ($15.50)
 const double SODA = 2.00;            ///< Цена газировки ($2.00)
 const double CHICKEN_NUGGETS = 7.00; ///< Цена наггетсов ($7.00)
 const double BREADSTICKS = 9.75;     ///< Цена хлебных палочек ($9.75)
 
 /**
  * @brief Главная функция программы
  * @details Автоматически выбирает по одному блюду из меню,
  *          подсчитывает общую стоимость и выводит чек.
  * @return 0 в случае успешного выполнения
  */
 int main() {
     double numItems = 0;  ///< Количество выбранных блюд
     double total = 0;     ///< Общая сумма заказа ($)
 
     cout << "=====================================================\n"
          << "\t\tWelcome to Pizza Palace\n"
          << "=====================================================" << endl;
 
     cout << fixed << setprecision(2) << right;
 
     // Массив кодов блюд (A-пицца, B-газировка, C-наггетсы, D-палочки)
     char items[] = {'A', 'B', 'C', 'D'};
 
     /**
      * @brief Цикл выбора блюд
      * @param itemLetter Код блюда (A, B, C, D)
      */
     for (char itemLetter : items) {
         double menuItem = 0;
 
         switch (itemLetter) {
             case 'A':
                 menuItem = PIZZA;
                 cout << "\nВыбрано: Pizza" << setw(26) << PIZZA << endl;
                 break;
             case 'B':
                 menuItem = SODA;
                 cout << "\nВыбрано: Soda" << setw(27) << SODA << endl;
                 break;
             case 'C':
                 menuItem = CHICKEN_NUGGETS;
                 cout << "\nВыбрано: Chicken Nuggets" << setw(16) << CHICKEN_NUGGETS << endl;
                 break;
             case 'D':
                 menuItem = BREADSTICKS;
                 cout << "\nВыбрано: Breadsticks" << setw(20) << BREADSTICKS << endl;
                 break;
             default:
                 cerr << "\nОшибка: Недопустимый код блюда\n";
                 continue;
         }
 
         numItems++;
         total += menuItem;
 
         cout << "Количество блюд: " << setprecision(0) << numItems << endl;
         cout << "Итоговая сумма: " << setprecision(2) << total << endl;
     }
 
     cout << "\nСпасибо! Приятного аппетита!" << endl;
     return 0;
 }
 