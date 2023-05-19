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

void resizeUp_vector(vector* mas, unsigned int size) {
    int *tmp = new int[mas->size];

    for (unsigned int i = 0; i < mas->size; ++i) {
        tmp[i] = mas->array[i];
    }

    delete[] mas->array;
    mas->array = new int[size];

    for (unsigned int i = 0; i < mas->size; ++i) {
        mas->array[i] = tmp[i];
    }

    mas->size += 1;

    delete[] tmp;
}

void show_vector(vector mas) {
    for (unsigned int i = 0; i < mas.size; ++i) {
        cout << mas.array[i] << ' ';
    }
}

int main()
{
    vector mas = init_vector(4);
    show_vector(mas);
    resizeUp_vector(&mas, 7);
}
