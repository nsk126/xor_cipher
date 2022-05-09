#include <iostream>
#include <string.h>

void cipher(int key, char* txt)
{
    size_t len = strlen(txt);

    // Your cipher input
    for (int i = 0; i < len; i++)
    {
        txt[i] = (char) (key ^ (int) txt[i]);
    }
}

int main(int a, char** v) {
    
    

    int randomCipher = 64014; // Add your custom cipher here

    char* toC = v[a - 1];

    std::cout << toC << std::endl;    
    cipher(randomCipher, toC);
    std::cout << toC << std::endl;
    cipher(randomCipher, toC);
    std::cout << toC << std::endl;
    
    

}
