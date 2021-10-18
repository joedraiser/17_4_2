#include <iostream>

void revert(int* array)
{
    int temp;
    for(int i=0;i<5;i++)
    {
        temp = *(array+i);
        *(array+i)=*(array+9-i);
        *(array+9-i)=temp;
    }
}


int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    revert(array);

    for(int i=0;i<10;i++)
    {
        std::cout << array[i] << " ";
    }
}
