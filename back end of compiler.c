#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char result[20];
    char operand1[20];
    char operand2[20];
    char operator[5];
} ThreeAddressCode;
void generateAssemblyCode(ThreeAddressCode *code, int codeCount) {
    printf("Generated Assembly Code:\n");

    for (int i = 0; i < codeCount; i++) {
        printf("%s = %s %s %s\n", code[i].result, code[i].operand1, code[i].operator, code[i].operand2);
    }
}
int main() {
    ThreeAddressCode intermediateCode[] = {
        {"t1", "a", "b", "+"},
        {"t2", "t1", "c", "*"},
        {"result", "t2", "d", "-"}
    };
    int codeCount = sizeof(intermediateCode) / sizeof(intermediateCode[0]);
    generateAssemblyCode(intermediateCode, codeCount);
	 return 0;
}
