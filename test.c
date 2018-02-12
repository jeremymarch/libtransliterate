#include "transliterate.h"
#include <stdio.h>

int main()
{
char *b = "ABC";
uint16_t buffer[100];
size_t buffer_length = 100;
size_t a = betacode_greek_to_utf16(b,
                               &buffer,
                               buffer_length,
                               false,
                               false);
}
