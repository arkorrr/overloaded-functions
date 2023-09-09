#include <iostream>
using namespace std;

const int rows = 2;
const int cols = 2;

void Task(int array[rows][cols])
{
    int min1 = array[0][0];
    int max1 = array[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array[i][j] << endl;
            min1 = array[i][j] > min1 ? min1 : array[i][j];
            max1 = array[i][j] < max1 ? max1 : array[i][j];
        }
    } 
    for (int i = 0; i < min(rows, cols); i++) {
        cout << array[i][i] << " ";
    }
    cout << endl;
}
void Task(double array[rows][cols])
{
    int min1 = array[0][0];
    int max1 = array[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array[i][j] << endl;
            min1 = array[i][j] > min1 ? min1 : array[i][j];
            max1 = array[i][j] < max1 ? max1 : array[i][j];
        }
    }
    for (int i = 0; i < min(rows, cols); i++) {
        cout << array[i][i] << " ";
    }
    cout << endl;
}
void Task(char array[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array[i][j] << endl;
        }
    }
    for (int i = 0; i < min(rows, cols); i++) {
        cout << array[i][i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[rows][cols] = { {1,2}, {3,4} };
    double array1[rows][cols] = { {0.1,0.2}, {0.3,0.4} };
    char array2[rows][cols] = { {'1','2'}, {'3','4'}};
    Task(array);
    Task(array1);
    Task(array2);
}
