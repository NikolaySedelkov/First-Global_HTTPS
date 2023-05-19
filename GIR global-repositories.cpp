#include <iostream>

using namespace std;

struct vector {
    int* array;
    unsigned int size;
};

vector init_vector(unsigned int size) {
    vector mas;
    mas.array = new int[size];
    mas.size = size;

    for (unsigned int i = 0; i < size; ++i)
        mas.array[i] = rand() % 56;

    return mas;
}

int main()
{
    vector mas = init_vector(4);
}
