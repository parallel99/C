#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main() {
    int informations[4] = {4, 159, 3258, 0};
    int something = 42;
    int* pSomething = &something;
    printf("%d", informations);
    return 0;
}

