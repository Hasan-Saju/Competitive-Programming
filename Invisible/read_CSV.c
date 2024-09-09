#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 100
#define MAX_RECORDS 100

typedef struct
{
    char name[50];
    int weight;
    int value;
} Record;

int main()
{

    FILE *file;

    // Open the file for reading
    file = fopen("ReadCSV.csv", "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    char line[MAX_LINE_LENGTH];

    Record records[MAX_RECORDS];
    int serial=0;

    while (fgets(line, sizeof(line), file))
    {
        char name[50];
        int value1, value2;

        // Parse the line to extract the data
        if (sscanf(line, "%49[^,],%d,%d", records[serial].name, &records[serial].weight, &records[serial].value) == 3)
        {
            serial++;
        }
        else
        {
            fprintf(stderr, "Error parsing line: %s\n", line);
        }
    }


    fclose(file);


    for (int i = 0; i < serial; i++)
    {
        printf("Name: %s, Weight: %d, Value: %d\n", records[i].name, records[i].weight, records[i].value);
    }

    return EXIT_SUCCESS;
}


