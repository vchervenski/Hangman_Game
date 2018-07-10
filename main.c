#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word[20], character;
    int lenght, i, j, FoundChara[20], flag, size = 7, Correct = 0;

    printf("Enter word:");
    scanf("%s", word);
    fflush(stdin);
    system("cls");

    lenght = strlen(word);

    printf("The word: ");
    for(i = 0; i < lenght; i++)
    {
        printf("_ ");
    }

    for(i = 0; i < lenght; i++)
    {
        FoundChara[i] = 0;
    }

    for(i = 0; i < size; i++)
    {
         if(Correct == lenght)
         {
             printf("\nYou found the word %s\n", word);
             system("pause");
             system("cls");
             break;
         }
         flag = 0;
         printf("\nEnter character:");
         scanf("%c", &character);
         fflush(stdin);
         for(j = 0; j < lenght; j++)
         {
             if(word[j] == character)
             {
                 if(FoundChara[j] == 1)
                 {
                     printf("Character already found");
                     size++;
                     flag = 2;
                 }
                 else
                {
                    FoundChara[j] = 1;
                    Correct++;
                    flag = 1;
                }

             }

         }
         if(flag == 1)
         {
            size++;
            printf("Word: ");
            for(j = 0; j < lenght; j++)
            {
                if(FoundChara[j] == 1)
                {
                    printf("%c ", word[j]);
                }
                else printf("_ ");
            }
            printf("\n");
         }
         else if(flag == 0)
         {
             printf("You have %d attempts\n", size - (i+1));
             printf("Character not found\n");
         }
    }
    if(Correct != lenght)
    {
        printf("\nGame over\n");
        system("pause");
        system("cls");

    }
    return 0;
}
