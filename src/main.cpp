#include <stdio.h>
#include <stdlib.h>
#include "max.c"
#include "list.c"



// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    /* Exercise 3 */
/*
    int i;
    int n;

    printf("Insert length of array: \n");
    scanf("%d", &n);

    int numbers[n];

    printf("Insert numbers to go in array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Greatest number in array: %d", max(numbers, n));

    printf("\n\n--------------------------\nTEST CASES FROM ASSIGNMENT\n--------------------------\n");
    
    int numbers1[] = {5, 10, 20, 6, 10, -1, 9};
    if (max(numbers1, 7) == 20) {
        printf("5, 10, 20, 6, 10, -1, 9; Largest == 20 -> SUCCESS!\n\n");
    } else {
        printf("5, 10, 20, 6, 10, -1, 9; Largest != %d -> FAILED!\n\n", max(numbers1, 7));
    }

    int numbers2[] = {5, 1, 4};
    if (max(numbers2, 3) == 5) {
        printf("5, 1, 4; Largest == 5 -> SUCCESS!\n\n");
    } else {
        printf("5, 1, 4; Largest != %d -> FAILED!\n\n", max(numbers2, 3));
    }
*/

    /* Exercise 4.a */
    node *list = (node *) malloc(sizeof(node));
    list->next = NULL;
    add(list, 1);
    add(list, 3);
    add(list, 2);
    add(list, 2);

    printout(list);

    printf("The length of the list is: %d", size(list));
 
    printf("The largest value of the list is: %d", largest(list));


    /* 4.b */
    printf("\n\n--------------------------\nTEST CASES FROM ASSIGNMENT\n--------------------------\n");

    node *testl = (node *) malloc(sizeof(node));
    testl->next=NULL;
    if (size(testl) == 0) {
        printf("The length of the sequence is == 0 -> SUCCESS!\n\n");
    } else {
        printf("The length of the sequence is == %d -> FAILED!\n\n", size(testl));
    }

    testl->next = (node*) malloc(sizeof(node));
    testl->next->next=NULL;
    testl->next->data=10;
    if (size(testl) == 1) {
        printf("The length of the sequence is == 1 -> SUCCESS!\n\n");
    } else {
        printf("The length of the sequence is == %d -> FAILED!\n\n", size(testl));
    }

    testl->next->next=(node*) malloc(sizeof(node));
    testl->next->next->next = NULL; 
    testl->next->next->data = 20; 
    if (size(testl) == 2) {
        printf("The length of the sequence is == 2 -> SUCCESS!\n\n");
    } else {
        printf("The length of the sequence is == %d -> FAILED!\n\n", size(testl));
    }

    /* 4.e */
    printf("\n\n--------------------------\nTEST CASES FROM ASSIGNMENT\n--------------------------\n");
    node *listTest = (node*) malloc(sizeof(node));
    node *p;
    for (int i=10; i>0; i--) {
        p = listTest;
        while (p->next!=NULL) {
            p= p->next;
        }
        p->next = (node*) malloc(sizeof(node));
        p=p->next;
        p->next=NULL;
        p->data = i;
    }
    if (largest(listTest) == 10) {
        printf("The largest value of the list is == 10 -> SUCCESS!\n\n");
    } else {
        printf("The largest value of the list is == %d -> FAILED!\n\n", largest(listTest));
    }

    listTest->next->next->next->data = 100;
    if (largest(listTest) == 100) {
        printf("The largest value of the list is == 100 -> SUCCESS!\n\n");
    } else {
        printf("The largest value of the list is == %d -> FAILED!\n\n", largest(listTest));
    }

    return 0;
}


