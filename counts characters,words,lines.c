#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;
    printf("Enter text (Ctrl+D to end input):\n");

    while ((ch = getchar()) != EOF) {
        charCount++;
        if (ch == '\n') {
            lineCount++;
        }
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            wordCount++;
        }
    }
    printf("\nAnalysis Results:\n");
    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of lines: %d\n", lineCount);

    return 0;
}
