#include <stdio.h>

int main() {
    FILE *filePtr;
    char fileName[] = "divisible_numbers.txt";
    int i;

    filePtr = fopen(fileName, "w");

    if (filePtr == NULL) {
        printf("Unable to create file.\n");
        return 1;
    }

    for (i = 1; i <= 50; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            fprintf(filePtr, "%d\n", i);
        }
    }

    printf("Numbers written to file successfully.\n");

    
    fclose(filePtr);

}
