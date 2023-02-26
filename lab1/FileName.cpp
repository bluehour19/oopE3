#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    char input[256], words[100][100], aux[100];
    char* p;
    int cnt = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]", input);
    p = strtok(input, " ");
    while (p != NULL)
    {
        strcpy_s(words[cnt], sizeof words[cnt], p);
        words[cnt][99] = '\0';
        cnt++;
        p = strtok(NULL, " ");

    }
    for (int i = 0; i < cnt - 1; i++)
    {
        for (int j = i + 1; j < cnt; j++)
        {
            if ((strlen(words[i]) < strlen(words[j])) || ((strlen(words[i]) == strlen(words[j])) && strcmp(words[i], words[j]) > 0))
            {
                strcpy_s(aux, sizeof aux, words[i]);
                strcpy_s(words[i], sizeof words[i], words[j]);
                strcpy_s(words[j], sizeof words[j], aux);

            }
        }
    }
    for (int i = 0; i < cnt - 1; i++)
    {
        printf("%s\n", words[i]);
    }
    return 0;
}