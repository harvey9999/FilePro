#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char store[500000][50];
int state = 0;
char sorted[50];
char puzzle[50];
bool check=true;
int compare (const void * a, const void * b){
    return (strcmp((char*)a, (char*)b));
}
int main(int argc, char **argv){
    FILE *tocheck, *checker;
    checker = fopen(argv[1], "r");
    tocheck = fopen(argv[2], "r");
    int len = 0;
    
    while (fgets(store[len], 50, checker) != NULL){
        size_t endline = strlen(store[len])-1;
        if (store[len][endline] == '\n')
            store[len][endline] = '\0';
        len++;
    }

    while (fgets(puzzle, 50, tocheck) != NULL){
        size_t endline = strlen(puzzle)-1;
        if (puzzle[endline] == '\n'){
            puzzle[endline] = '\0';
        }
        printf("%s: ", puzzle);
        qsort(puzzle, strlen(puzzle), sizeof(char), compare);
        int i=0;
        while( i<len){
            strcpy(sorted, store[i]);
            qsort(sorted, strlen(store[i]), sizeof(char), compare);
            if (strcmp(puzzle, sorted) == 0 ){
                printf("%s ", store[i]);
                state = false;
            }
            i++;
        }
        if (state == true){
            printf("NO MATCHES");
        }
        state = true;
        printf("\n");
    }
    fclose(checker);
    fclose(tocheck);
}
