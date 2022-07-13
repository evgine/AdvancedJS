//1.Իրականացնել char* strcat(char* s1, char* s2); ֆունկցիան, որը ստանում է երկու C տողեր և կոնկատենացնում (միացնում) տողերը 
//իրար՝ պահելով առաջին արգումենտում։

#include <iostream>

int strlen(char* ptr) {
        int size = 0;
        for (int i = 0; ptr[i] != '\0'; ++i, ++size) {}
        return size;
}

char* strcat(char* s1, char* s2)
{       
        int size = strlen(s1) + strlen(s2) + 1;
        char* concatArr = new char[size];
        int index = 0;
        int currIndex = 0;
        while (s1[index] != '\0') {
                concatArr[currIndex] = s1[index];
                ++index;
                ++currIndex;
        }       
        index = 0;
        while (s2[index] != '\0') {
                concatArr[currIndex] = s2[index];
                ++index;
                ++currIndex;
        }
        concatArr[currIndex] = '\0';
        delete[] s1;
        return concatArr;
}

int main() {
          int size1 = 4;
          int size2 = 6; 
          char* str1 = new char[size1];
          char* str2 = new char[size2];
          std::cout << "Enter first string" << std::endl;
          std::cin >> str1;
          std::cout << "Enter second string" << std::endl;
          std::cin >> str2;
          str1 = strcat(str1, str2);
          std::cout << str1 << std::endl;
          delete[] str1;
          delete[] str2;
          return 0;
}

//2.Իրականացնել strset(char* s, char ch); ֆունկցիան, որը տրված s տողի բոլոր սիմվոլները փոխարինում է ch սիմվոլով։

#include <iostream>

void strset (char* s, char ch) {
        for(int i = 0; s[i] != '\0'; ++i) {
                s[i] = ch;
        };
        return;
}

int main () {
        int size = 5;
        char ch = 'a';
        char* str = new char[size];
        std::cin >> str;
        strset(str, ch);
        std::cout << str  << std::endl;
        delete[] str;
        return 0;
}

//3.Իրականացնել strmove(char* s, int n); ֆունկցիան, որը տրված s տողը ցիկլիկ տեղաշարժում է դեպի աջ n անգամ։ 
//Օրինակ, strmove(“hello”, 2); կտեղաշարժի “hello”-ն 2 դիրքով դեպի աջ և կստանա “lohel”։

#include <iostream>

int strlen(char* ptr) {
        int size = 0;
        for (int i = 0; ptr[i] != '\0'; ++i, ++size) {}
        return size;
}

void strmove(char* s, int n)
{
        int size = strlen(s);
        while(n > 0) {
                char tmp = s[size - 1];
                for(int i = size - 1; i > 0; --i) {
                        s[i] = s[i - 1];
                }
                s[0] = tmp;
                --n;
        }
}

int main() {
        char* str = new char[size];
        std::cin >> str;
        int shift = 2;
        strmove(str, shift);
        std::cout << str << std::endl;
        delete[] str;
        return 0;
}
