#include <iostream>
using namespace std;
// adding commits to show git repo changes

void printArray(int *ptr, int num);
void lessersort(int *ptr, int n);

int main(void)
{

    int A[] = {31, 41, 59, 26, 41, 58};

    printArray(A, 6);

    lessersort(A, 6);

    printArray(A, 6);

    return 0;
}

void printArray(int *ptr, int num)
{

    cout << "Elements in Array: ";

    for (int i = 0; i < num; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << '\n';
}

void lessersort(int *ptr, int n)
{
    int key = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (ptr[j] < ptr[index])
            {
                index = j;
            }
        }
        key = ptr[i];
        ptr[i] = ptr[index];
        ptr[index] = key;
    }
}
