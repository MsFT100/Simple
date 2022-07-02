#include <stdio.h>
#include <stdlib.h>

/*b) Write a c program that does the following:
i. Accept the cost of goods bought in a supermarket.
ii. Accepts amount tendered for payment of the goods.
iii. Computes the change due.*/

int main()
{
    double item_1,item_2,item_3, amountPaid, changedue;// cost of items, amount paid and cost of goods
    //input
    printf("Enter price for item 1:");
    scanf("%d", &item_1);
    printf("Enter price for item 2:");
    scanf("%d", &item_2);
    printf("Enter price for item 3:");
    scanf("%d", &item_3);

    /*Calculate the total cost of goods*/
    float sum;
    sum = item_1 + item_2 + item_3;

    printf("Total payable amount is: ");
    printf("%d", sum);
    printf("\n");

    //amount paid
    printf("Amount paid: ");
    scanf("%d", &amountPaid);
    printf("\n");
    //compute

    changedue = amountPaid - sum;
    //output

    printf("Total amount paid is: ");
    printf("%d", changedue);
    return 0;
}
