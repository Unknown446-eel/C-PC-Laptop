#include<iostream>
using namespace std;


void printArray(int *ptr, int num);



int main(void){

    int A[] =  {31, 41, 59, 26, 41, 58};
    int key = 0, j = 0;

    printArray(A, 6);


    for(int i = 4; i > -1; i--)
    {
        key = A[i];
        j = i+1;
        
        while(j<6 && key> A[j]){
            A[j-1] = A[j];
            j++;
        }
        A[j-1] = key;
    }

    printArray(A, 6);
    return 0;
}

void printArray(int *ptr, int num){

    cout << "Elements in Array: ";

    for(int i = 0; i < num; i++){
        cout << ptr[i] << " ";
    }
    cout << '\n';
}