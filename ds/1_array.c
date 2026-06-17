// Data Structure
// │
// ├── Primitive Data Structure
// │   ├── int
// │   ├── float
// │   ├── char
// │   └── boolean
// │
// └── Non-Primitive Data Structure
//     │
//     ├── Linear Data Structure
//     │   ├── Array
//     │   ├── Linked List
//     │   ├── Stack
//     │   └── Queue
//     │
//     └── Non-Linear Data Structure
//         ├── Tree
//         └── Graph
 // ............       1. TRAVERSAL

// #include <stdio.h>

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = 5;

//     for(int i = 0; i < n; i++) {
//         printf("%d \n", arr[i]);
//     }
    
//     return 0;
// }


//  ...........        2. INSERTION


// #include <stdio.h>

// int main() {
//     int arr[10] = {10, 20, 30, 40};
//     int n = 4, pos = 2, value = 25;

//     int i = n;

//     while(i > pos) {
//         arr[i] = arr[i - 1];
//         i--;
//     }

//     arr[pos] = value;
//     n++;

//     for(i = 0; i < n; i++) {
//         printf("%d \n", arr[i]);
//     }

//     return 0;
// }

//..           3. DELETION   

// #include <stdio.h>

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = 5;
//     int pos = 2; // index to delete (30)

//     // shift elements left
//     for (int i = pos; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }

//     n--; // reduce size logically

//     // print array
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }



//                2. searching

// #include <stdio.h>

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = 5;
//     int key = 30;
//     int found = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             printf("Element found at index %d\n", i);
//             found = 1;
//             break;
//         }
//     }

//     if (!found) {
//         printf("Element not found\n");
//     }

//     return 0;
// }