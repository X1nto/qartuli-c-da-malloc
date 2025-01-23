#include <stdio.h>
#include <stdlib.h>

char **canvas;
int size;

void initializeCanvas(int size) {
    canvas = (char **)malloc(size * sizeof(char *));
    for (int i = 0; i < size; i++) {
        canvas[i] = (char *)malloc(size * sizeof(char));
        for (int j = 0; j < size; j++) {
            canvas[i][j] = ' ';
        }
    }
}


void displayCanvas(int size) {
    printf("  ");
    for (int j = 0; j < size; j++) {
        printf("%d ", j);
    }
    printf("\n");

    for (int i = 0; i < size; i++) {
        printf("%d|", i);
        for (int j = 0; j < size; j++) {
            printf("%c|", canvas[i][j]);
        }
        printf("\n");
    }
}


void clearCanvas(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            canvas[i][j] = ' ';
        }
    }
}


void drawOnCanvas(int row, int col, char pen) {
    if (row >= 0 && row < size && col >= 0 && col < size) {
        canvas[row][col] = pen;
    } else {
        printf("Invalid coordinates! Row and column should be between 0 and %d.\n", size - 1);
    }
}


void freeCanvas(int size) {
    for (int i = 0; i < size; i++) {
        free(canvas[i]);
    }
    free(canvas);
}

int main() {
    char pen = '*';
    int row, col;
    char command;


    printf("Enter canvas size (default is 5): ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        size = 5;
        printf("Invalid input. Using default size 5.\n");
    }


    initializeCanvas(size);


    while (1) {

        displayCanvas(size);


        printf("\nCommands:\n");
        printf("D <row> <col>: Draw at (row, col)\n");
        printf("C: Clear the canvas\n");
        printf("E: Exit the program\n");


        printf("Enter command: ");
        scanf(" %c", &command);

        if (command == 'D' || command == 'd') {
            printf("Enter row and column: ");
            if (scanf("%d %d", &row, &col) != 2) {
                printf("Invalid input! Please enter two integers.\n");
                while (getchar() != '\n');
                continue;
            }
            printf("Enter a character to draw: ");
            scanf(" %c", &pen);
            drawOnCanvas(row, col, pen);
        } else if (command == 'C' || command == 'c') {
            clearCanvas(size);
        } else if (command == 'E' || command == 'e') {
            break;
        } else {
            printf("Invalid command! Try again.\n");
        }
    }


    printf("Final Canvas:\n");
    displayCanvas(size);


    freeCanvas(size);

    return 0;
}
