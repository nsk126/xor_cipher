#include <iostream>
#include <string.h>

void cipher(int key, char* txt)
{
    size_t len = strlen(txt);

    // Simple XOR Cipher
    for (int i = 0; i < len; i++)
    {
        txt[i] = (char) (key ^ (int) txt[i]);
    }
}

int main(int a, char** v) {
    
    

    int randomCipher = 64014; // Add your custom cipher here

    // Consider only one argument
    char* toC = v[a - 1];

    std::cout << toC << std::endl; // Will print your input string
    cipher(randomCipher, toC);
    std::cout << toC << std::endl; // Will print the encrypted string
    cipher(randomCipher, toC);
    std::cout << toC << std::endl; // Will print the decrypted string
    
    

}
