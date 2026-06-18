// Linked List
// │
// ├── Singly Linked List      
// │      │
// │      └── Node → Data + Next
// │
// ├── Doubly Linked List
// │      │
// │      └── Node → Prev + Data + Next
// │
// ├── Circular Singly Linked List
// │      │
// │      └── Last Node → First Node
// │
// └── Circular Doubly Linked List
//        │
//        └── Last Node ↔ First Node



// //**************/   IMPLEMNT SINGLY LINEAR LINKED LIST ****************//


// //                                                    1. INSERTION 

// #include<stdio.h>
// #include<stdlib.h>

// struct node {
//     int data;
//     struct node *next;
// };

// struct node *head = NULL;

// int count();   // Function Prototype

// //                                                =>ADD AT STARTING NODE
// void addatbegin() {
//     int n;
//     printf("Enter the data insert at start: ");
//     scanf("%d", &n);

//     struct node *temp;
//     temp = (struct node *)malloc(sizeof(struct node));

//     temp->data = n;
//     temp->next = head;
//     head = temp;
// }

// //                                                =>ADD AT END NODE
// void append() {
//     int num;
//     printf("\nEnter the data insert at last : ");
//     scanf("%d", &num);

//     struct node *temp;
//     temp = (struct node *)malloc(sizeof(struct node));

//     temp->data = num;
//     temp->next = NULL;

//     if (head == NULL) {
//         head = temp;
//     }
//     else {
//         struct node *p;
//         p = head;

//         while (p->next != NULL) {
//             p = p->next;
//         }

//         p->next = temp;
//     }
// }

// //                                                =>ADD AT ANYWHERE IN NODE
// void addafter() {
//     int num, pos;

//     printf("Enter the data to insert where u want : ");
//     scanf("%d", &num);

//     printf("Enter the position after which insert: ");
//     scanf("%d", &pos);

//     struct node *temp, *p;
//     temp = (struct node *)malloc(sizeof(struct node));

//     if (head == NULL) {
//         temp->data = num;
//         temp->next = NULL;
//         head = temp;
//     }
//     else {
//         int c;
//         c = count();

//         if (pos < c) {
//             p = head;

//             int i;
//             for (i = 0; i < pos; i++) {
//                 p = p->next;
//             }

//             temp->data = num;
//             temp->next = p->next;
//             p->next = temp;
//         }
//         else {
//             printf("Wrong position entered\n");
//             free(temp);
//         }
//     }
// }

// //                                                =>COUNT NODE
// int count() {
//     struct node *p;
//     p = head;

//     int i = 0;

//     while (p != NULL) {
//         i++;
//         p = p->next;
//     }

//     return i;
// }

// //                                                =>DISPLAY
// void traversing() {
//     if (head == NULL) {
//         printf("Empty Linked List\n");
//         return;
//     }

//     struct node *ptr;
//     ptr = head;

//     printf("\nLinked List: ");

//     while (ptr != NULL) {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }
// }
// //                                            =>DELETE ALL CASE                                             
// void deleteNode() {
//     int b = 0;
//     int num;

//     printf("Enter the no. to be deleted: ");
//     scanf("%d", &num);

//     struct node *p, *q, *temp;

//     if (head == NULL)                             // CASE 1
//     {
//         printf("Linked List is empty");
//     }
//     else if (head->next == NULL && head->data == num)   // CASE 2
//     {
//         free(head);
//         head = NULL;
//         b = 1;
//     }
//     else if (head->next != NULL && head->data == num)   // CASE 3
//     {
//         temp = head;
//         head = head->next;
//         temp->next = NULL;
//         free(temp);
//         b = 1;
//     }
//     else
//     {
//         p = head;
//         q = NULL;

//         while (p != NULL)
//         {
//             if (p->data == num)
//             {
//                 b = 1;
//                 q->next = p->next;
//                 free(p);
//                 break;
//             }
//             else
//             {
//                 q = p;
//                 p = p->next;
//             }
//         }
//     }

//     if (b == 0)
//     {
//         printf("Element not found");
//     }
//     else
//     {
//         printf("Element deleted successfully");
//     }
// }

// //                                                =>MAIN
// int main() {

//     addatbegin();
//     addatbegin();

//     append();
//     append();

//     addafter();
//     addafter();

//     traversing();
//     deleteNode ();
//     traversing();

//     return 0;

// }

                    




