#include <stdio.h>

void main()
{
    FILE *source, *destination;
    int ch;

    source = fopen("source.txt", "r");

    if(source == NULL)
    {
        printf("Source file not found");
        return;
    }

    destination = fopen("copy.txt", "w");

    if(destination == NULL)
    {
        printf("Cannot create destination file");
        fclose(source);
        return;
    }

    while((ch = fgetc(source)) != EOF)
        fputc(ch, destination);

    fclose(source);
    fclose(destination);

    printf("File copied successfully");
}
