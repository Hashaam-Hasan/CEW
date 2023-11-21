#include <stdio.h>
#include <stdlib.h>


int main()

{
    int* ptr;
    int n, i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 0;
    }
    else {
        printf("Memory successfully allocated using malloc.\n");
    for (i = 0; i < n; ++i) {
        ptr[i] = i + 1;
    }
    printf("The elements of the array are: ");
    for (i = 0; i < n; ++i) {
        printf("%d, ", ptr[i]);
    }
    }
return 0;
}

struct Employee{
    int employeeID;
    char name[50];
    double salary;
};

int main(){
    int numEmployees;
    printf("Enter the number of employees :");
    scanf("%d",&numEmployees);
    if(numEmployees<=0){
        printf("Invalid no of employees\n");
        return 1;
    }
    // Dynamic memory allocation always uses pointer
    struct Employee*employees=(struct Employee*)malloc(numEmployees*sizeof(struct Employee));
    if(employees==NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }
    //Initialize the employee records
    for(int i=0;i<numEmployees;i++){
        printf("Enter Employee ID for employee %d : ",i+1);
        scanf("%d",&employees[i].employeeID );

        printf("Enter name for employee %d :",i+1);
        scanf("%s",employees[i].name );

        printf("Enter Salary for employee %d :",i+1);
        scanf("%lf",&employees[i].salary );
    }
    //Print the employee records
    for (int i=0;i<numEmployees;i++){
        printf("Employee ID: %d\n",employees[i].employeeID);
        printf("Name: %s\n",employees[i].name);
        printf("Salary: %.2lf\n\n\n",employees[i].salary);
    }
    free(employees);
    return 0;
}


int main() {
char *description;
description = malloc( 30 * sizeof(char) );
if( description == NULL ) {
    printf("Error - unable to allocate required memory\n");
} else {
    strcpy( description, "Hamza is a CIS student ");
}
//suppose you want to store bigger description
description = realloc( description, 100 * sizeof(char) );
if( description == NULL ) {
    printf("Error - unable to allocate required memory\n");
} else {
    strcat( description, "He is in second semester");
}
printf("Description: %s\n", description );
// release memory using free() function
free(description);}








#include <stdio.h>
#include <stdlib.h>
// Define a structure for a node in the linked list
struct Node {
int data;
struct Node* next;
};
// Function to create a new node
struct Node* createNode(int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct
Node));
if (newNode == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    exit(1);
}
newNode->data = data;
newNode->next = NULL;
return newNode;
}
// Function to insert a node at the beginning of the linked list
struct Node* insertAtBeginning(struct Node* head, int data) {
struct Node* newNode = createNode(data);
newNode->next = head;
return newNode;
}
// Function to insert a node at the end of the linked list
struct Node* insertAtEnd(struct Node* head, int data) {
struct Node* newNode = createNode(data);
if (head == NULL) {
return newNode;
}
struct Node* current = head;
while (current->next != NULL) {
current = current->next;
}
current->next = newNode;
return head;


}
// Function to insert a node after a specific node
struct Node* insertAfter(struct Node* head, int data, int
searchValue) {
struct Node* newNode = createNode(data);
struct Node* current = head;
while (current != NULL && current->data != searchValue) {
current = current->next;
}
if (current == NULL) {
printf("Node with search value not found\n");
free(newNode); // Free the allocated node
return head;
}
newNode->next = current->next;
current->next = newNode;
return head;
}
// Function to delete a node with a specific value
struct Node* deleteNode(struct Node* head, int data) {
struct Node* current = head;
struct Node* prev = NULL;
while (current != NULL && current->data != data) {
prev = current;
current = current->next;
}
if (current == NULL) {
printf("Node with value not found\n");
return head;
}
if (prev == NULL) {
head = current->next;
} else {
prev->next = current->next;
}
free(current);
return head;
}
// Function to search for a node with a specific value
struct Node* searchNode(struct Node* head, int data) {
struct Node* current = head;
while (current != NULL) {
if (current->data == data) {
return current;


}
current = current->next;
}
return NULL; // Node not found
}
// Function to print the linked list
void printList(struct Node* head) {
struct Node* current = head;
while (current != NULL) {
printf("%d -> ", current->data);
current = current->next;
}
printf("NULL\n");
}
// Function to free the memory used by the linked list
void freeList(struct Node* head) {
struct Node* current = head;
while (current != NULL) {
struct Node* temp = current;
current = current->next;
free(temp);
}
}
int main() {
struct Node* head = NULL;
// Insert nodes at the beginning
head = insertAtBeginning(head, 3);
head = insertAtBeginning(head, 2);
head = insertAtBeginning(head, 1);
// Insert nodes at the end
head = insertAtEnd(head, 4);
head = insertAtEnd(head, 5);
// Insert a node after a specific value
head = insertAfter(head, 6, 3);
// Print the linked list
printf("Linked List: ");
printList(head);
// Search for a node
int searchValue = 4;


struct Node* foundNode = searchNode(head, searchValue);
if (foundNode != NULL) {
printf("Node with value %d found\n", searchValue);
} else {
printf("Node with value %d not found\n", searchValue);
}
// Delete a node
int deleteValue = 2;
head = deleteNode(head, deleteValue);
// Print the linked list after deletion
printf("Linked List after deletion: ");
printList(head);
// Free the memory
freeList(head);
return 0;
}




int main()
{
    while(1)
        {
            int a,b;
            printf("ENTER A:");
            scanf("%d",&a);
            printf("ENTER A:");
            scanf("%d",&a);

        }
}


 struct Contact{
     char name[50];
     char email[50];
     int phone_num;
 };


 int main(){
      // Dynamic memory allocation always uses pointer
      int no_of_contact=1;
    struct Contact*contact=(struct Contact*)malloc(no_of_contact*sizeof(struct Contact));
    if(contact==NULL){
        printf("Memory allocation failed.\n");
        return 1;
        no_of_contact++;
 }
  printf("Enter name of new contact :");
    scanf("%s",contact[0].name);
    printf("Enter email of new contact :");
    scanf("%s",contact[0].email);
    printf("Enter phone num of new contact :");
    scanf("%d",&contact[0].phone_num);
 while(1){
   int choice;
   printf("Enter 1 to continue and 2 to exit :");
   scanf("%d",&choice);
   if(choice==1){
        struct Contact*contact= realloc( struct Contact*, no_of_contact * sizeof(struct Contact) );
        struct Contact*contact= realloc( struct Contact*, no_of_contact * sizeof(struct Contact) );
    if( contact == NULL ) {
        printf("Error - unable to allocate required memory\n");
        return 1;
    }

        printf("Enter name of new contact :");
        scanf("%s",contact[no_of_contact].name);
        printf("Enter email of new contact :");
        scanf("%s",contact[no_of_contact].email);
        printf("Enter phone num of new contact :");
        scanf("%d",contact[no_of_contact].phone_num);
        no_of_contact++;

   }
   else if(choice==2){
    printf("Thank you for your consideration");
    break;
   }


 }






