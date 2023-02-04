/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n = 15;
    int arr[n];
    int duplicateValues[n];
    int duplicateCount = 0;
    bool present; //существует ли элемент в duplicateValues массиве.
    
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10 + 1;//Заполняем исходный массив случайными числами
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //------------------------------------------------------------------------------

    //Вычисляем повторяющиеся значения
    for (int i = 0; i < n; i++){
        present = false;
        for(int j = 0; j < duplicateCount; j++){
            if(arr[i] == duplicateValues[j]){//если повторяющийся элемент уже добавлен в duplicateValues - заканчиваем проверку
                present = true;
                break; 
            }
        }
        if(present){ //если повторяющийся элемент уже добавлен в duplicateValues - пропускаем итерацию
            continue;
        }
        duplicateValues[duplicateCount] = arr[i];
        duplicateCount++;
        
        cout << duplicateValues[duplicateCount - 1] << " ";
        
    }

    return 0;
}
