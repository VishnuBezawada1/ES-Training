#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//created the node.
struct Node {
  int data;
  struct Node *next;
};

//defining the struct Node to node1.
typedef struct Node node1;
//creating the node pointers for refernce.
node1 *head = NULL; //initially keeping all pointer to null.
node1 *last = NULL;

//creating insertFirst function to insert values in first of linkedlist.
void insertFirst(int d) {
  node1 *new_node = (node1*)malloc(sizeof(node1)); //allocating space to new node.
  new_node -> data = d;
  new_node -> next = head;
  head = new_node; //changing head pointer to new node.
}

bool isEmpty() { //checking the list empty or not.
  return head == NULL;
}

//creating insertLast function to insert values at last of the linkedlist.
void insertLast(int d) {
  node1 *new_node = (node1*)malloc(sizeof(node1)); //allocationg space to new node.
  new_node -> data = d;
  new_node -> next = NULL;

  last = head;

  if (isEmpty()) { //checking whether linked list is empty or not.
    head = new_node; //assigning the new node to head.
    return;
  }
  while (last->next != NULL) { // traversing till the end.
    //inserting the value to the last node.
    last = last->next;
  }
  last->next = new_node;
  return;
}

//creating insertMid function to insert value in desired position.
void insertMid(int d,int position) {
  last = head;
  int count = 1;
  while (last != NULL) {
    if (position == 0) {
      insertFirst(d);
      return;
    }
    if (count == position) {
      node1 *new_node = (node1*)malloc(sizeof(node1));
      new_node -> data = d;
      new_node -> next = last -> next;
      last -> next = new_node;
      return;
    }
    last = last -> next;
    count++;
  }
  printf("entered position %d is not there.\n",position);
}

//traversing till the end to print the values.
void printList() {
  node1 *p = head; //using p as the refernce pointer to the head pointer.
  printf("[ ");
  while (p != NULL) { //using while loop for traversing over the list.
    printf("%d - ",p -> data);
    p = p -> next;
  }
  printf("NULL ]\n");
}


//deleting from the front.
void deleteFirst() {
  node1 *temp = head;
  if (isEmpty()) {
    printf("List is Empty\n");
    return;
  }
  head = head -> next;
  free(temp);
}

//deleting last number from the list.
void deleteLast() {
  last = head;
  if(isEmpty()) {
    printf("List is Empty\n");
    return;
  }
  node1 *prev;
  int count = 1;
  while (last -> next != NULL) {
    prev = last;
    last = last -> next;
    count++;
  }
  if (count == 1) {
    head = NULL;
    return;
  }
  prev -> next = NULL;
}

//deleting any given number.
void delete(int d) {
  last = head;
  if (last != NULL && last -> data == d) {
    deleteFirst();
    return;
  }
  node1 *prev;
  while (last != NULL && last -> data != d) {
    prev = last;
    last = last -> next;
  }
  if (last == NULL) {
    printf("Entered number %d is not there\n",d);
    return;
  }
  prev -> next = last -> next;
  free(last);
}

void search(int d) {
  last = head;
  int count = 0;
  while (last != NULL) {
    if (last -> data == d) {
      printf("%d is present in list\n",d);
      printf("it is present in %d position\n",count);
      return;
    }
    last = last -> next;
    count++;
  }
  printf("%d is not present in list\n",d);
}

//dispaly in terminal function.
void message() {
  printf("Enter 1 to proceed: ");
  int x;
  scanf("%d",&x);
  while(x == 1) {
    printf("\n");
    printf("Press 1 for insert first\n");
    printf("Press 2 for insert at last\n");
    printf("Press 3 for insert in any position\n");
    printf("Press 4 for delete first value\n");
    printf("Press 5 for delete last value\n");
    printf("Press 6 for delete any value\n");
    printf("Press 7 for search value\n");
    printf("Press 8 for print list\n");
    printf("Press 0 for stop\n");
    int y;
    scanf("%d",&y);
    int p;
    switch (y) {
      case 1:
        printf("Enter the inserting number: ");
        scanf("%d",&p);
        insertFirst(p);
        printList(head);
        break;
      case 2:
        printf("Enter the inserting number: ");
        scanf("%d",&p);
        insertLast(p);
        printList(head);
        break;
      case 3:
        printf("Enter the inserting number: ");
        scanf("%d",&p);
        printf("Enter the position to insert: ");
        int t;
        scanf("%d",&t);
        insertMid(p,t);
        printList(head);
        break;
      case 4:
        printf("Deleting first value\n");
        deleteFirst();
        printList(head);
        break;
      case 5:
        printf("Deleting last value\n");
        deleteLast();
        printList(head);
        break;
      case 6:
        printf("Enter the specific number to delete: ");
        scanf("%d",&p);
        delete(p);
        printList(head);
        break;
      case 7:
        printf("Enter the number to search: ");
        scanf("%d",&p);
        search(p);
        break;
      case 8:
        printList(head);
        break;
      case 0:
        x = 0;
        break;
      default:
        printf("Entered case is not there:)\n");
        break;
    }
  }
}

int main() {
  message();
  return 0;
}
