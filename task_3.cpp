#include <vector>
#include <iostream>
/*На языке С/С++, написать функцию, которая быстрее всего (по процессорным тикам)
 * отсортирует данный ей массив чисел.Массив может быть любого размера со случайным
 * порядком чисел (в том числе и отсортированным).Объяснить почему вы считаете, что
 * функция соответствует заданным критериям.*/

void merge(std::vector<int>& a, int left, int right){
    int i = left;
    int mid = left + (right - left) / 2;
    int j = mid + 1;
    int pos = 0;
    std::vector<int> b(right - left + 1);
    while (i <= mid && j <= right){
        if(a[i] < a[j]){
            b[pos++] = a[i++];
        } else{
            b[pos++] = a[j++];
        }
    }
    while (i <= mid){
        b[pos++] = a[i++];
    }
    while (j <= right){
        b[pos++] = a[j++];
    }
    for(int i = left; i <= right; i++){
        a[i] = b[i - left];
    }
}

void merge_sort(std::vector<int>& a, int left, int right){
    if(right <= left){
        return;
    }
    int mid = left + (right - left) / 2;
    merge_sort(a, left, mid);
    merge_sort(a, mid + 1, right);
    merge(a, left, right);
}

void printNumbers(std::vector<int>& a){
    for(int i = 0; i < a.size(); i++){
        std::cout << a[i] << "\t";
    }
}

/*Для решения данной задачи я выбрал сортировку слиянием. Так как данная сортировка
* имеет асимптотику O(n log n) что намного лучше по сравнению с другими алгоритмами
* сортировки. Еще главная особенность данного алгоритма, что асимптотика всегда одинаковая,
* O(n log n)*/