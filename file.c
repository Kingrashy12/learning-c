#include <stdio.h>

int writeFile(const char *filename, const char *content);

int readFile(const char *filename, char *buffer, size_t bufferSize);

int main()
{

    int result = 0;
    char buffer[256] = {0};

    result = writeFile("example.txt", "Hello, World!\nThis is a file handling example in C.");
    if (result != 0)
    {
        return result;
    }

    result = readFile("example.txt", buffer, sizeof(buffer));
    if (result != 0)
    {
        return result;
    }

    return result;
}

int writeFile(const char *filename, const char *content)
{
    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    fprintf(file, "%s", content);

    printf("File written successfully.\n");

    fclose(file);

    return 0;
}

int readFile(const char *filename, char *buffer, size_t bufferSize)
{
    FILE *file = fopen(filename, "r");

    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    while (fgets(buffer, bufferSize, file) != NULL)
    {
        printf("File content: %s", buffer);
    }

    fclose(file);
    return 0;
}