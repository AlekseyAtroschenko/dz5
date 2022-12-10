#include <iostream>
#include <ctime>
using namespace std;
//Задание 1________________________________________________________________

//int** createArr2D(int rows, int cols) { // создание двумерного динамического массива - int
//    int** mas = new int* [rows];
//    for (int r = 0; r < rows; r++)
//        mas[r] = new int[cols] {0};
//    return mas;
//}
//double** createArr2Ddouble(double rows, double cols) { // создание двумерного динамического массива - double
//    double** mas = new double* [rows];
//    for (int r = 0; r < rows; r++)
//        mas[r] = new double[cols] {0};
//    return mas;
//}
//char** createArr2Dchar(int rows, int cols) { // создание двумерного динамического массива - char
//    char** mas = new char* [rows];
//    for (int r = 0; r < rows; r++)
//        mas[r] = new char[cols] {0};
//    return mas;
//}
//void SetRndArray2D(int** arr, int n, int m, int a = 1, int b = 9) // заполнение двумерного динамического массива - int
//{
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            arr[i][j] = a + rand() % (b - a + 1);
//}
//void SetRndArray2Ddouble(double** arr, int n, int m, int a = 1, int b = 9) // заполнение двумерного динамического массива - double
//{
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            arr[i][j] = a + rand() % (b - a + 1) / static_cast<double>(rand() % 10 + 1);
//}
//void SetRndArray2Dchar(char** arr, int n, int m) // заполнение двумерного динамического массива - char
//{
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            arr[i][j] = 97 + rand() % 26;
//}
//void PrintArray2D(int** arr, int n, int m) // вывод двумерного динамического массива - int
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//            cout << arr[i][j] << "\t";
//        cout << endl;
//    }
//}
//void PrintArray2Ddouble(double** arr, int n, int m) // вывод двумерного динамического массива - double
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//            cout << arr[i][j] << "\t";
//        cout << endl;
//    }
//}
//void PrintArray2Dchar(char** arr, int n, int m) // вывод двумерного динамического массива - char
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//            cout << arr[i][j] << "\t";
//        cout << endl;
//    }
//}
//void SortingArray2D(int** arr, int n, int m) // сортировка двумерного динамического массива - int
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m - 1; j++)
//        {
//            int index = j;
//            int minElement = arr[i][j];
//            for (int p = j; p < m; p++)
//            {
//                if (minElement > arr[i][p])
//                {
//                    index = p;
//                    minElement = arr[i][p];
//                }
//            }
//            swap(arr[i][j], arr[i][index]);
//        }
//    }
//}
//void SortingArray2Ddouble(double** arr, int n, int m) // сортировка двумерного динамического массива - double
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m - 1; j++)
//        {
//            int index = j;
//            double minElement = arr[i][j];
//            for (int p = j; p < m; p++)
//            {
//                if (minElement > arr[i][p])
//                {
//                    index = p;
//                    minElement = arr[i][p];
//                }
//            }
//            swap(arr[i][j], arr[i][index]);
//        }
//    }
//}
//void SortingArray2Dchar(char** arr, int n, int m) // сортировка двумерного динамического массива - char
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m - 1; j++)
//        {
//            int index = j;
//            int minElement = arr[i][j];
//            for (int p = j; p < m; p++)
//            {
//                if (minElement > arr[i][p])
//                {
//                    index = p;
//                    minElement = arr[i][p];
//                }
//            }
//            swap(arr[i][j], arr[i][index]);
//        }
//    }
//}
//int MinElOnTheMainDiagonalArray2D(int** arr, int n) // определение минимального элемента на главной диагонали матрицы - int
//{
//    int min = arr[0][0];
//    for (int i = 1; i < n; i++)
//        if (min > arr[i][i]) min = arr[i][i];
//    return min;
//}
//double MinElOnTheMainDiagonalArray2Ddouble(double** arr, int n) // определение минимального элемента на главной диагонали матрицы - double
//{
//    double min = arr[0][0];
//    for (int i = 1; i < n; i++)
//        if (min > arr[i][i]) min = arr[i][i];
//    return min;
//}
//char MinElOnTheMainDiagonalArray2Dchar(char** arr, int n) // определение минимального элемента на главной диагонали матрицы - char
//{
//    int min = arr[0][0];
//    for (int i = 1; i < n; i++)
//        if (min > arr[i][i]) min = arr[i][i];
//    return min;
//}
//int MaxElOnTheMainDiagonalArray2D(int** arr, int n) // определение максимального элемента на главной диагонали матрицы - int
//{
//    int max = arr[0][0];
//    for (int i = 1; i < n; i++)
//        if (max < arr[i][i]) max = arr[i][i];
//    return max;
//}
//double MaxElOnTheMainDiagonalArray2Ddouble(double** arr, int n) // определение максимального элемента на главной диагонали матрицы - double
//{
//    double max = arr[0][0];
//    for (int i = 1; i < n; i++)
//        if (max < arr[i][i]) max = arr[i][i];
//    return max;
//}
//char MaxElOnTheMainDiagonalArray2Dchar(char** arr, int n) // определение максимального элемента на главной диагонали матрицы - char
//{
//    int max = arr[0][0];
//    for (int i = 1; i < n; i++)
//        if (max < arr[i][i]) max = arr[i][i];
//    return max;
//}
//void DeleteArray2D(int** arr, int n) // удаление двумерного динамического массива - int
//{
//    for (int i = 0; i < n; i++)
//        delete[] arr[i];
//    delete[] arr;
//}
//void DeleteArray2Ddouble(double** arr, int n) // удаление двумерного динамического массива - double
//{
//    for (int i = 0; i < n; i++)
//        delete[] arr[i];
//    delete[] arr;
//}
//void DeleteArray2Dchar(char** arr, int n) // удаление двумерного динамического массива - char
//{
//    for (int i = 0; i < n; i++)
//        delete[] arr[i];
//    delete[] arr;
//}
////Задание 2 ________________________________________________________________
//void searchMax(int* massiv, int massivSize)
//{
//    cout << "1) Finding the maximum value in a one-dimensional array" << endl <<
//        "   Array: ";
//    int max = massiv[0];
//    int index = 0;
//    for (int i = 0; i < massivSize; i++)
//    {
//        cout << massiv[i] << " ";
//        if (massiv[i] > max)
//        {
//            max = massiv[i];
//            index = i;
//        }
//    }
//    cout << endl << "   Max element = massiv[" << index << "] = " << max << endl << endl;
//}
//void searchMax(int massiv[][3], int massivSize, int secondSize)
//{
//    cout << "2) Finding the maximum value in a two-dimensional array" <<
//        endl << "   Array:" << endl << "   ";
//    int max = massiv[0][0];
//    int index1 = 0;
//    int index2 = 0;
//    for (int i = 0; i < massivSize; i++)
//    {
//        for (int j = 0; j < secondSize; j++)
//        {
//            cout << massiv[i][j] << " ";
//            if (massiv[i][j] > max)
//            {
//                max = massiv[i][j];
//                index1 = i;
//                index2 = j;
//            }
//        }
//        cout << endl << "   ";
//    }
//    cout << "Max element = massiv[" << index1 << "][" << index2 << "] = " << max << endl << endl;
//}
//void searchMax(int massiv[][2][2], int massivSize, int secondSize, int thirdSize)
//{
//    cout << "3) Finding the maximum value in a three-dimensional array" << endl;
//    int max = massiv[0][0][0];
//    int index1 = 0;
//    int index2 = 0;
//    int index3 = 0;
//    for (int i = 0; i < massivSize; i++)
//    {
//        for (int j = 0; j < secondSize; j++)
//        {
//            for (int k = 0; k < thirdSize; k++)
//            {
//                if (massiv[i][j][k] > max)
//                {
//                    max = massiv[i][j][k];
//                    index1 = i;
//                    index2 = j;
//                    index3 = k;
//                }
//            }
//        }
//    }
//    cout << "   Max element = massiv[" << index1 << "][" << index2 << "][" <<
//        index3 << "] = " << max << endl << endl;
//}
//void searchMax(int number1, int number2)
//{
//    cout << "4) Finding the maximum of two integers" << endl << "   " << number1;
//    if (number1 > number2)
//    {
//        cout << " > ";
//    }
//    else if (number1 < number2)
//    {
//        cout << " < ";
//    }
//    else
//    {
//        cout << " = ";
//    }
//    cout << number2 << endl << endl;
//}
//void searchMax(int number1, int number2, int number3)
//{
//    cout << "5) Finding the maximum of three integers" << endl;
//
//    int max = number1;
//    if (number1 > number2)
//    {
//        if (number1 >= number3)
//        {
//            max = number1;
//        }
//        else
//        {
//            max = number3;
//        }
//    }
//    else if (number1 < number2)
//    {
//        if (number2 >= number3)
//        {
//            max = number2;
//        }
//        else
//        {
//            max = number3;
//        }
//    }
//    else
//    {
//        if (number2 >= number3)
//        {
//            max = number2;
//        }
//        else
//        {
//            max = number3;
//        }
//    }
//
//    cout << "   Max between: " << number1 << " " << number2 << " " <<
//        number3 << " = " << max << endl << endl;
//}

// Задание 4
const int sz = 18;
void sortArrayOne(int arr[], int halfPath);
void sortArrayTwo(int arr[], int halfPath);
void sortSecondPartOne(int arr[], int sz, int halfPath);
void sortSecondPartTwo(int arr[], int halfPath);

int main()
{
    setlocale(LC_ALL, "rus");
    ////Задание 1________________________________________________________________
    // char 
    //int n = 4, m = n;
    //char** arr = createArr2Dchar(n, m);
    //srand(time(0));
    //SetRndArray2Dchar(arr, n, m);
    //cout << "Source array:\n";
    //PrintArray2Dchar(arr, n, m);
    //SortingArray2Dchar(arr, n, m);
    //cout << "Sorted array:\n";
    //PrintArray2Dchar(arr, n, m);
    //cout << "Minimal element on the main diagonal of the matrix: " << MinElOnTheMainDiagonalArray2Dchar(arr, n) << endl;
    //cout << "Maximum element on the main diagonal of the matrix: " << MaxElOnTheMainDiagonalArray2Dchar(arr, n) << endl;
    //DeleteArray2Dchar(arr, n);
    /*
    // double 
    int n = 4, m = n;
    double** arr = createArr2Ddouble(n, m);
    srand(time(0));
    SetRndArray2Ddouble(arr, n, m);
    cout << "Source array:\n";
    PrintArray2Ddouble(arr, n, m);
    SortingArray2Ddouble(arr, n, m);
    cout << "Sorted array:\n";
    PrintArray2Ddouble(arr, n, m);
    cout << "Minimal element on the main diagonal of the matrix: " << MinElOnTheMainDiagonalArray2Ddouble(arr, n) << endl;
    cout << "Maximum element on the main diagonal of the matrix: " << MaxElOnTheMainDiagonalArray2Ddouble(arr, n) << endl;
    DeleteArray2Ddouble(arr, n);
    */
    /*
    // int
    int n = 4, m = n;
    int** arr = createArr2D(n, m);
    srand(time(0));
    SetRndArray2D(arr, n, m);
    cout << "Source array:\n";
    PrintArray2D(arr, n, m);
    SortingArray2D(arr, n, m);
    cout << "Sorted array:\n";
    PrintArray2D(arr, n, m);
    cout << "Minimal element on the main diagonal of the matrix: " << MinElOnTheMainDiagonalArray2D(arr, n) << endl;
    cout << "Maximum element on the main diagonal of the matrix: " << MaxElOnTheMainDiagonalArray2D(arr, n) << endl;
    DeleteArray2D(arr, n);
    */

    ////Задание 2________________________________________________________________
    //int const massivSize = 10;
    //int const massivSize2 = 3;
    //int const massivSize3 = 2;
    //int massiv1[massivSize] = { 1,2,4,3,6,9,8,7,5,0 };
    //int massiv2[massivSize2][massivSize2] = { {8,7,6},{5,4,3},{2,1,9} };
    //int massiv3[massivSize3][massivSize3][massivSize3] = { {{1,2},{3,4}},{{5,8},{6,7}} };
    //int number1 = 5;
    //int number2 = 7;
    //int number3 = 9;

    //searchMax(massiv1, massivSize);
    //searchMax(massiv2, massivSize2, massivSize2);
    //searchMax(massiv3, massivSize3, massivSize3, massivSize3);
    //searchMax(number1, number2);
    //searchMax(number1, number2, number3);

    //// Сортировка 
    //// Задание 1
    /*int digitals[10]; 

    cout << "Введите 10 чисел для заполнения массива: " << endl;

    for (int i = 0; i < 10; i++) {
        cin >> digitals[i]; 
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            if (digitals[j] > digitals[j + 1]) {
                int b = digitals[j]; 
                digitals[j] = digitals[j + 1]; 
                digitals[j + 1] = b; 
            }
        }
    }

    cout << "Массив в отсортированном виде: ";

    for (int i = 0; i < 10; i++) {
        cout << digitals[i] << " "; 
    }*/

    //// Задание 2
    //srand((int)time(NULL));
    //int const arSize = 10;
    //int const numberLimit = 50;
    //int massiv[arSize];
    //int buffer;

    //cout << "Array start: \n";
    //for (int i = 0; i < arSize; i++)
    //{
    //    massiv[i] = rand() % (numberLimit + 1);
    //    cout << "ArrayStart[" << i << "] = " << massiv[i] << endl;
    //}

    //for (int i = 1; i < arSize; i++)
    //{
    //    for (int j = i; j > 0; j--)
    //    {
    //        if (massiv[j] < massiv[j - 1])
    //        {
    //            buffer = massiv[j];
    //            massiv[j] = massiv[j - 1];
    //            massiv[j - 1] = buffer;
    //        }
    //        else
    //        {
    //            break;
    //        }
    //    }
    //}

    //cout << "Array finish: \n";
    //for (int i = 0; i < arSize; i++)
    //{
    //    cout << "ArrayFinish[" << i << "] = " << massiv[i] << endl;
    //}

    //// Задание 3
//int arr[10];
//cout << "Введите оценки:" << endl;
//for (int q = 0; q < 10; q++)
//{
//    cout << "Оценка " << q + 1 << ":" << endl;
//    cin >> arr[q];
//}
//
//int chose;
//
//do
//{
//    cout << "Меню" << endl;
//    cout << "Вывести все оценки < --- 1 \n";
//    cout << "Пересдать Экзамен < -------- 2 \n";
//    cout << "Выходит ли стипендия< ------ 3 \n";
//    cin >> chose;
//    cout << endl;
//
//    switch (chose)
//    {
//    case 1:
//        for (int w = 0; w < 10; w++)
//            cout << arr[w] << endl;
//        break;
//    case 2:
//        int repl;
//        cout << "Какую оценку исправить:";
//        cin >> repl;
//        cout << "Старая оценка " << arr[repl - 1] << endl;
//
//        cout << "Введите новую оценку:";
//        cin >> arr[repl - 1];
//        break;
//    case 3:
//        double average = 0;
//        int sum = 0;
//        for (int q = 0; q < 10; q++)
//            sum += arr[q];
//        average = double(sum) / 10;
//        if (average >= 10.7)
//            cout << "Будет стипендия\n";
//        else
//            cout << "Не будет стипендии\n";
//        break;
//    }
//} while (true);

//// Задание 4
int myArray[sz];
float averageNum = 0.0;
float resAV = 0.0;
int halfPath = 0;

cout << "\nВведите среднее значение -> ";
cin >> averageNum;

srand(time(NULL));
halfPath = (sz / 3) * 2;


for (int i = 0; i < sz; i++)
{
    myArray[i] = rand() % 100 + 1;
}

cout << "\nВыводим массив : \n\n";
for (int i = 0; i < sz; i++)
{
    if (i == 12)
    {
        cout << " |";
    }
    cout << " " << myArray[i];
}

for (int i = 0; i < halfPath; i++)
{
    resAV += myArray[i];
    if (i == halfPath - 1)
    {
        resAV = resAV / i;
    }
}


if (resAV > averageNum)
{
    cout << "\n\nСортируем №1 \n";
    sortArrayOne(myArray, halfPath);
}
if (resAV < averageNum)
{
    cout << "\n\nСортируем №2 \n";
    sortArrayTwo(myArray, halfPath);
}


cout << "\n\nВыводим сортированный массив : \n\n";
for (int i = 0; i < sz; i++)
{
    if (i == 12)
    {
        cout << " |";
    }
    cout << " " << myArray[i];
}

cout << "\n\n";
return 0;
}

void sortArrayOne(int arr[], int halfPath)
{
    int tmp = 0;

    for (int i = 0; i < halfPath - 1; i++)
    {
        if (i == halfPath - 2)
        {
            sortSecondPartOne(arr, sz, halfPath);
        }
        for (int j = i + 1; j < halfPath; j++)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

void sortArrayTwo(int arr[], int halfPath)
{
    int tmp = 0;
    sortSecondPartTwo(arr, halfPath);

    for (int i = halfPath; i < sz - 1; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

void sortSecondPartOne(int arr[], int sz, int halfPath)
{
    int tmp = 0;

    for (int i = halfPath; i < sz - 1; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[i] < arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

void sortSecondPartTwo(int arr[], int halfPath)
{
    int tmp = 0;

    for (int i = 0; i < halfPath - 1; i++)
    {
        for (int j = i + 1; j < halfPath; j++)
        {
            if (arr[i] < arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}