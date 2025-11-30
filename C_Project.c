#include <stdio.h>
#include <stdlib.h>

void encrypt_decrypt(const char *input, const char *output, char key) {
    FILE *fin = fopen(input, "rb");
    FILE *fout = fopen(output, "wb");

    if (!fin || !fout) {
        printf("Error: Cannot open file!\n");
        return;
    }

    char buffer;
    while (fread(&buffer, 1, 1, fin)) {
        buffer = buffer ^ key;  // XOR encryption/decryption
        fwrite(&buffer, 1, 1, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Operation completed successfully!\n");
}

int main() {
    int choice;
    char input[100], output[100];
    int key;

    printf("===== FILE ENCRYPTION / DECRYPTION =====\n");
    printf("1. Encrypt File\n");
    printf("2. Decrypt File\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter input file name: ");
    scanf("%s", input);

    printf("Enter output file name: ");
    scanf("%s", output);

    printf("Enter encryption key (0-255): ");
    scanf("%d", &key);

    encrypt_decrypt(input, output, (char)key);

    return 0;
}