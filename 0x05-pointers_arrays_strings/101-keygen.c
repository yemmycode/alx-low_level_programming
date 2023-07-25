#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char getRandomChar() {
int randomType = rand() % 62; 

if (randomType < 26)
return 'A' + randomType; 
else if (randomType < 52)
return 'a' + (randomType - 26); 
else
return '0' + (randomType - 52); 
}

int main() {
srand(time(NULL)); 

int passwordLength = 8;
char password[passwordLength + 1]; 

printf("Generating a random valid password: ");
    
for (int i = 0; i < passwordLength; i++) {
password[i] = getRandomChar();
}
    
password[passwordLength] = '\0'; 
printf("%s\n", password);
return 0;
}

