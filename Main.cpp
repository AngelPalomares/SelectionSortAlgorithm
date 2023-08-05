
#include <iostream>
#include <string>
using namespace std;

void SelectionSort(int array[], int size);
void Swap(int &, int &);


int main()
{
    int size = 5;

    int Howdy[size];

    for(int i = 0; i < size; i++)
    {
        cin >> Howdy[i];
    }

    SelectionSort(Howdy, size);

    cout << "Sorting the numbers from least to greatest " << endl;
    for(int i = 0; i < size; i++)
    {
        cout << Howdy[i] << endl;
    }

    return 0;
}

void SelectionSort(int array[], int size)
{
    cout << "Going in the Selection sort" << endl;
    int minindex,minValue;

    for(int i = 0; i < (size - 1); i++)
    {
        minindex = i;
        minValue = array[i];
        for(int j = i + 1; j < size; j++)
        {
            if(array[j] < minValue)
            {
                minValue = array[j];
                minindex = j;
            }
        }
        Swap(array[minindex], array[i]);
    }
}

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
