//2.C++-ով կամ C-ով իրականացնել strlen() ֆունկցիան, որը ստանում է ցուցիչ տողի վրա (char*) վերադարձնում է 
//տողի երկարությունը (հաշվելով սիմվոլների քանակը մինչև '\0')

#include <iostream>

int strlen(char* ptr) {
        int size = 0;
        for (int i = 0; ptr[i] != '\0'; ++i, ++size) {}
        return size;
}

int main() {
        char arr[5] = "asdf";
        std::cout << strlen(arr) << std::endl;
        return 0;
}


//4.C/C++-ով իրականացնել ֆունկցիա, որը շրջում է տողը և վերադարձնում նույն տողը՝ շրջված։ 
//Ֆունկցիան տողը ստանում է որպես char* (char ցուցիչ)

char* flipArr (char* arr, int size) {
        char* flipedArr = new char[size];
        for (int i = 0; i < size - 1; ++i) {
                flipedArr[i] = arr[size-i-2];
        }
        flipedArr[size - 1] = '\0';
        return flipedArr;
}

int main() {
        int size = 5;
        char* str = new char[size];
        std::cin >> str;
        char* str2 = flipArr(str, size);
        std::cout << str2 << std::endl;
        delete[] str;
        delete[] str2;
        return 0;
}
