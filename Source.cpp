
#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    // ===============    ����������� ���� �� ����������� BUBLLE SORT   =========================

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
    for (int i = 0; i < size; i++) // ������� ���� ������� ������ ����� ����������
    {
        isDone = true; //�� ������ ������� ����� ����.true
        for (int j = 0; j < size - 1; j++) // ���������� ���� ���������� �������� ��������
            // ��������  size-1, ������ ��� ����� ���� ����� ���� �� size �
            // �������� ��� 1 (��� � ������� ����) --�� ������ �� �������
            // �������. ��� ���������� Out of range
        {
            if (arr[j] > arr[j + 1])
            {
                isDone = false; //���� �������� ����-������ ��� �� �������������  ������ �� false
                int temp = arr[j];  // SWAP �������� ������ ������ ��������
                arr[j] = arr[j + 1]; // ������ ����� ��������� ����������
                arr[j + 1] = temp;
            }
        }
        if (isDone == true) // ���� ���������� ����� true �� �� false �� ����������
            break;
    }
    cout << "\n\nArray sorted by increasing: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n";

 //   */

    // ===============    ���������� ������� ������ SELECTION SORT =========================

     /*
    int const size = 10000;
    int arr[size];
    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % 20;
        cout << arr[i] << " ";
    }
    for (int i = 0; i < size - 1; i++) //size-1 ��� ������ ��������� ��������� ��.(�� ������ 
        // ��������� �� ��� ������, � "������" ��� ���) ������� -1 !!!!
    {
        int index = i; // ������� ��� ����� ��,��� ������� � ��������� � ������� 
        for (int j = index + 1; j < size; j++) // index+1 ������, ��� ��  index-�  ��������� ���� i, 
            // � ��������� �������� ������(�.�.index+1 (i+1 ��� �����)), j ��������� �� size(����� � ��������� ���� �����)
        {
            if (arr[j] < arr[index]) //����������� ����� ������������ ��������
                index = j;
        }
        if (i != index) // ���� ������� ������� ������� ������!
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




   // ===============   ���������� ��������� Insertion SORT   =============================

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
            //�������� j=i,������ ��� i ��� �� ������� �� ������� �� ������������ 
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

