#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* unique_jewels[100000]; 
int unique_count = 0;

int main() {
    char current_jewel[100000]; 

    while (scanf("%99999s", current_jewel) != EOF) {
        int already_exists = 0;

        for (int i = 0; i < unique_count; i++) {
            if (strcmp(unique_jewels[i], current_jewel) == 0) {
                already_exists = 1;
                break;
            }
        }

        if (already_exists == 0) {
            unique_jewels[unique_count] = malloc(strlen(current_jewel) + 1);
            if (unique_jewels[unique_count] != NULL) {
                strcpy(unique_jewels[unique_count], current_jewel);
                unique_count++;
            }
        }
    }

    printf("%d\n", unique_count);

    for (int i = 0; i < unique_count; i++) {
        free(unique_jewels[i]);
    }

    return 0;
}