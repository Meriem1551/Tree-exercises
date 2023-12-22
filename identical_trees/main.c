#include "main.h"

/**
 * main - checks the code
 * Return: always 0
 */

int main(void)
{
    int num_nodes, data;
    Tree *root1, *root2;

    printf("Enter same number of nodes for the 2 trees: ");
    scanf("%d", &num_nodes);

    // FIRST TREE

    printf("What is the 1st root's number ");
    scanf("%d", &data);
    root1 = create_root(data);
    for (int i = 0; i < num_nodes - 1; i++)
    {
        printf("What's the number for this child? ");
        scanf("%d", &data);
        root1 = insert_child(root1, data);
    }

    // SECOND TREE

    printf("What is the 2nd root's number ");
    scanf("%d", &data);
    root2 = create_root(data);
    for (int i = 0; i < num_nodes - 1; i++)
    {
        printf("What's the number for this child? ");
        scanf("%d", &data);
        root2 = insert_child(root2, data);
    }

    if (isIdentical(root1, root2))
        printf("Yes");
    else
        printf("No");
}