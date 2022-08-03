
#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    // ===============    ПУЗЫРЬКОВАЯ сорт по ВОЗРАСТАНИЮ BUBLLE SORT   =========================

    /*
    int const size = 10000;
    int arr[size];
    cout << "\nSource array: ";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % 100;
        cout << arr[i] << " ";
    }
    bool isDone;
    for (int i = 0; i < size; i++) // Внешний цикл обеспеч нужное колич повторений
    {
        isDone = true; //До старта прохода задаём знач.true
        for (int j = 0; j < size - 1; j++) // Внутренний цикл перебирает соседние элементы
            // Написали  size-1, потому что когда цикл будет идти до size и
            // прибавит ещё 1 (как в условии ниже) --мы выйдем за пределы
            // массива. Это исключение Out of range
        {
            if (arr[j] > arr[j + 1])
            {
                isDone = false; //Если попадаем сюда-значит ещё не отсортированы  меняем на false
                int temp = arr[j];  // SWAP операция замены одного значения
                arr[j] = arr[j + 1]; // другим через временную переменную
                arr[j + 1] = temp;
            }
        }
        if (isDone == true) // Если переменная равна true то на false не поменяется
            break;
    }
    cout << "\n\nArray sorted by increasing: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n";

 //   */

    // ===============    Сортировка методом ВЫБОРА SELECTION SORT =========================

     /*
    int const size = 10000;
    int arr[size];
    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % 20;
        cout << arr[i] << " ";
    }
    for (int i = 0; i < size - 1; i++) //size-1 нет смысла проверять последнюю яч.(мы должны 
        // проверить всё что справа, а "справа" уже нет) поэтому -1 !!!!
    {
        int index = i; // Запомин тот номер яч,кот выбрали и проверяем с другими 
        for (int j = index + 1; j < size; j++) // index+1 потому, что мы  index-у  присвоили знач i, 
            // А проверяем соседнюю справа(т.е.index+1 (i+1 ещё можно)), j проверяем до size(вдруг в последней наше число)
        {
            if (arr[j] < arr[index]) //стандартный поиск минимального значения
                index = j;
        }
        if (i != index) // Если нашелся элемент который меньше!
        {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
    cout << "\n\nArray sorted by increasing SELECTION SORT: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "\n";
    
   // */




   // ===============   Сортировка Вставками Insertion SORT   =============================

   // /* 
   cout << "\n"; 
   int const size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % 100;
        cout << arr[i] << " ";
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--)
            //выбираем j=i,потому что i это та позиция на которой мы остановились 
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
        }
    }
    cout << "\n\nArray sorted by increasing Insertion SORT : ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
cout << "\n";
  // */
    





    return 0;
}

