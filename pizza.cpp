#include <iomanip>
#include <iostream>
using namespace std;

//*****************************************************************************************************

/**
 * @file Pizza.cpp
 * @brief Программа для автоматического заказа в ресторане Pizza Palace
 * @author Github projet
 * @date ???
 */

/**
 * @brief Главная функция программы
 * @details Программа автоматически выбирает по одному блюду из каждой позиции меню,
 *          вычисляет общую стоимость заказа и выводит информацию на экран.
 * 
 * Меню включает:
 * - Пиццу
 * - Газировку
 * - Куриные наггетсы
 * - Хлебные палочки
 * 
 * @return 0 при успешном выполнении
 */
int main() {
    const double PIZZA = 15.50,       ///< Цена пиццы
                 SODA = 2.00,         ///< Цена газировки
                 CHICKEN_NUGGETS = 7.00,  ///< Цена куриных наггетсов
                 BREADSTICKS = 9.75;  ///< Цена хлебных палочек
    
    double numItems = 0,              ///< Количество выбранных блюд
           total = 0;                 ///< Общая сумма заказа

    cout << "=====================================================\n"
         << "\t\tWelcome to Pizza Palace\n"
         << "=====================================================" << endl;

    cout << fixed << setprecision(2) << right;

    /**
     * @brief Массив кодов блюд для автоматического выбора
     * @details Содержит коды:
     * - 'A' - Пицца
     * - 'B' - Газировка
     * - 'C' - Куриные наггетсы
     * - 'D' - Хлебные палочки
     */
    char items[] = {'A', 'B', 'C', 'D'};
    double menuItem; ///< Текущее выбранное блюдо

    /**
     * @brief Цикл по всем элементам меню
     * @param itemLetter Код текущего блюда из массива items
     */
    for (char itemLetter : items) {
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
                continue; // Пропускаем недопустимые коды
        }

        numItems++;
        total += menuItem;

        cout << "Количество блюд: " << setprecision(0) << numItems << endl;
        cout << "Итоговая сумма: " << setprecision(2) << total << endl;
    }

    cout << "\nСпасибо! Приятного аппетита!" << endl;

    return 0;
}

//*****************************************************************************************************