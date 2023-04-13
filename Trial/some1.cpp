// // create a linked list in which The function takes two pointers 'listl' and 'list2', each of them pointing to the start of a linked list. Both the lists represent two non-negative numbers. Each of their nodes
// // contains a single digit. Implement the function to add the two numbers and return it as a linked list.

// #include <iostream>
// using namespace std;

// struct node {
//     int data;
//     node *next;
// };

// node *createNode(int data) {
//     node *newNode = new node;
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// node *addTwoLists(node *list1, node *list2) {
//     node *result = NULL;
//     node *temp = NULL;
//     node *prev = NULL;
//     int carry = 0, sum = 0;
//     while (list1 != NULL || list2 != NULL) {
//         sum = carry + (list1 ? list1->data : 0) + (list2 ? list2->data : 0);
//         carry = (sum >= 10) ? 1 : 0;
//         sum = sum % 10;
//         temp = createNode(sum);
//         if (result == NULL) {
//             result = temp;
//         } else {
//             prev->next = temp;
//         }
//         prev = temp;
//         if (list1) {
//             list1 = list1->next;
//         }
//         if (list2) {
//             list2 = list2->next;
//         }
//     }
//     if (carry > 0) {
//         temp->next = createNode(carry);
//     }
//     return result;
// }

// void printList(node *node) {
//     while (node != NULL) {
//         cout << node->data << " ";
//         node = node->next;
//     }
//     cout << endl;
// }

// int main() {
//     node *list1 = createNode(5);
//     list1->next = createNode(6);
//     list1->next->next = createNode(3);
//     cout << "First List is: ";
//     printList(list1);
//     node *list2 = createNode(8);
//     list2->next = createNode(4);
//     list2->next->next = createNode(2);
//     cout << "Second List is: ";
//     printList(list2);
//     node *result = addTwoLists(list1, list2);
//     cout << "Resultant list is: ";
//     printList(result);
//     return 0;
// }

// -------------------------------------------------

#include <iostream>
using namespace std;

int func(int no) {
    int c = 0;
    while(no) {
        c++;
        no >>= 1;
    }
    return c;
}

int main() {
    int no;
    cin >> no;
    cout << func(no);
    return 0;
}