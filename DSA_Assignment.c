#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100
#define MAX_LEN 100

char text_buffer[MAX_SIZE][MAX_LEN];
int stack_top = -1;

void insert_word(const char *input)
{
    if (stack_top < MAX_SIZE - 1)
    {
        strncpy(text_buffer[++stack_top], input, MAX_LEN);
    }
    else
    {
        printf("Buffer is at maximum capacity!\n\n");
    }
}

void remove_last()
{
    if (stack_top >= 0)
    {
        stack_top--;
    }
    else
    {
        printf("Nothing to remove!\n\n");
    }
}

void show_content()
{
    if (stack_top == -1)
    {
        printf("Document is empty\n\n");
        return;
    }
    for (int i = 0; i <= stack_top; i++)
    {
        printf("%s ", text_buffer[i]);
    }
    printf("\n\n");
}

int main()
{
    int option;
    char input_text[MAX_LEN];

    while (1)
    {
        printf("===== Simple Text Editor =====\n");
        printf("1) Insert Word\n2) Delete Last\n3) Show Text\n4) Quit\n");
        printf("Your choice: ");
        scanf("%d", &option);
        getchar();

        switch (option)
        {
        case 1:
            printf("Type a word: ");
            fgets(input_text, MAX_LEN, stdin);
            input_text[strcspn(input_text, "\n")] = '\0';
            insert_word(input_text);
            break;
        case 2:
            remove_last();
            break;
        case 3:
            show_content();
            break;
        case 4:
            printf("Exiting editor...\n");
            return 0;
        default:
            printf("Please select a valid option!\n\n");
        }
    }
    return 0;
}