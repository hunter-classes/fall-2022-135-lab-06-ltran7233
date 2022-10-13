#ifndef DECRYPT_H
#define DECRYPT_H

char decryptChar(char c, int rshift);
std::string decryptCaesar(std::string ciphertext, int rshift);
std::string decryptVigenere(std::string ciphertext, std::string keyword);

#endif
