#include <iostream>
#include "Tasks/task_1.h"
#include "Tasks/task_2.h"
#include "Tasks/task_3.h"

int main(){
    std::cout << "-------------------TASK 1-------------------\n";
    std::cout << "Test 1\n" << isEven(12) << std::endl;
    std::cout << "Test 2\n" << isEven(11) << std::endl;
    std::cout << "Test 3\n" << isEven(256) << std::endl;
    std::cout << "Test 4\n" << isEven(255) << std::endl;
    std::cout << "Test 5\n" << isEven(1024) << std::endl;
    std::cout << "Test 6\n" << isEven(1023) << std::endl;


    std::cout << "-------------------TASK 3-------------------\n";
    std::vector<int> testVector1 = {9,5,6,1,2,3,4,7,8,0};
    std::vector<int> testVector2 = {956,532,645,112,254,345,454,778,891};
    std::vector<int> testVector3 = {9565,5,64,11255,25,3145,4543,7,891};
    mergeSort(testVector1, 0, testVector1.size() - 1);
    mergeSort(testVector2, 0, testVector2.size() - 1);
    mergeSort(testVector3, 0, testVector3.size() - 1);

    std::cout << "Test 1\n";
    printNumbers(testVector1);
    std::cout << '\n';

    std::cout << "Test 2\n";
    printNumbers(testVector2);
    std::cout << '\n';

    std::cout << "Test 3\n";
    printNumbers(testVector3);
    std::cout << '\n';
    return 0;
}
