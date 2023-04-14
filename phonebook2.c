#include <stdio.h>
#include <string.h>

int main(void)
{
    typedef struct phonebook2
    {
        /* data */
        char name[100];
        char number[100];
    } person;
    
    char temp[50]; // array to hold the name to be searched

    // number of people to be added in the phonebook
    int n;
    printf("Enter number of persons in the phonebook: ");
    scanf("%i", &n);

    //array n
     person people[n];

    // loop to take input from the user and store in array
    for (int i = 0; i < n; i++)
    {
        printf("Enter Name: ");
        scanf("%s", people[i].name);
        for (int j = 0; j < n; j++)
        {
            printf("Enter Number: ");
            scanf("%s", people[i].number);
            break;
        }
    }
    /*
    for (int i = 0; i < n; i++)
    {
        printf("%s; %s\n", people[i].name, people[i].number);
    }
    */
    
    //prompting the user for an input name 
    printf("Enter name to be searched: ");
    scanf("%s", temp);

    // comparison for searched name 
    for (int i = 0; i < n; i++)
    {
        if (strcmp(people[i].name, temp) == 0)
        {
            printf("%s: %s", people[i].name, people[i].number);
            return 0;
        }
    }
    //print statements if found

    printf("Name not in phone book");
}