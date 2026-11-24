#include <stdio.h>

struct book
{
    int id;
    char name[50];
    int issued;
};

void main()
{
    struct book b[50];
    int n, i, choice, id, found;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter book name: ");
        scanf("%49s", b[i].name);

        b[i].issued = 0;
    }

    do
    {
        printf("\n\n1. Display Books");
        printf("\n2. Issue Book");
        printf("\n3. Return Book");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            for(i = 0; i < n; i++)
            {
                printf("\nID: %d Name: %s",
                       b[i].id, b[i].name);

                if(b[i].issued)
                    printf(" (Issued)");
                else
                    printf(" (Available)");
            }
        }
        else if(choice == 2 || choice == 3)
        {
            printf("Enter book ID: ");
            scanf("%d", &id);

            found = 0;

            for(i = 0; i < n; i++)
            {
                if(b[i].id == id)
                {
                    found = 1;

                    if(choice == 2 && !b[i].issued)
                    {
                        b[i].issued = 1;
                        printf("Book issued successfully");
                    }
                    else if(choice == 3 && b[i].issued)
                    {
                        b[i].issued = 0;
                        printf("Book returned successfully");
                    }
                    else
                        printf("Book status cannot be changed");

                    break;
                }
            }

            if(!found)
                printf("Book not found");
        }

    } while(choice != 4);
}
