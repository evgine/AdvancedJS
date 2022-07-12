//2.
#include <iostream>

int fib (int num) {
        if (num < 2) {
           return(num);
        }
        return (fib(num - 1) + fib( num - 2));
}

int arrSize(char* ptr) {
        int size = 0;
        for (int i = 0; ptr[i] != '\0'; ++i, ++size) {}
        return size + 1;
}

char* flipArr (char* arr, int size) {
        char* flipedArr = new char[size];
        for (int i = 0; i < size - 1; ++i) {
                flipedArr[i] = arr[size-i-2];
        }
        flipedArr[size - 1] = '\0';
        return flipedArr;
}

int main() {
        //int num =9;
        //cout << fib(num);
        //char arr[5] = "asdf";
        //std::cout << arrSize(arr) << std::endl;
        int size = 5;
        char* str = new char[size];
        std::cin >> str;
        char* str2 = flipArr(str, size);
        std::cout << str2 << std::endl;
        delete[] str;
        delete[] str2;

        return 0;
}
