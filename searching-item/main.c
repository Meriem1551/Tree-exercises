#include "search.h"

/**
 * main - checks code
 * Rreturn: always 0
 */

int main(void)
{

    Tree *root;
    int num_nodes, data, tresor;

    printf("Enter number of nodes ");
    scanf("%d", &num_nodes);
    printf("Enter number for root ");
    scanf("%d", &data);
    root = create_root(data);
    for (int i = 1; i < num_nodes; i++)
    {
        printf("What's the number for this child ");
        scanf("%d", &data);
        root = insert_child(root, data);
    }

    printf("Which number you're looking for? ");
    scanf("%d", &tresor);

    if (isExiste(root, tresor))
        print_message("yes the number %d existe", tresor);
    else
        print_message("Sorry we don't find this number ");

    return 0;
}