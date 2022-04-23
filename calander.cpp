// A simple C++ program for traversal of a linked list
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string title;
    string description;
    int date;
    string month;
    Node* next;
};

// This function prints contents of linked list
// starting from the given node
void printList(Node* n)
{
    while (n != NULL)
    {
        cout << n->title <<" ";
        cout << n->description<<" ";
        cout << n->date <<" ";
        cout << n->month <<" "<<endl;
        n = n->next;
    }
}


void add_reminder(Node** head_ref)
{
    string title;
    string description;
    int date;
    string month;
    cin>>title>>description>>date>>month;

    /* 1. allocate node */
    Node* new_node = new Node();

    /* 2. put in the data */
    new_node->title = title;
    new_node->description = description;
    new_node->date = date;
    new_node->month = month;

    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);

    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}

void update_reminder(Node* n)
{
    string temp_title;
    string new_description;
    int temp_date;
    string temp_month;
    cout<<"To update input title, date and month"<<endl;
    cin>>temp_title>>temp_date>>temp_month;

    while(n!=NULL)
    {
        if(n->title == temp_title&&n->date==temp_date&&n->month==temp_month)
        {
            cout<<"Modify description"<<endl;
            cin>>new_description;
            n->description = new_description;
        }
        n = n->next;
    }
}

void delete_reminder(Node** head_ref)
{

    // Store head node
    Node* temp = *head_ref;
    Node* prev = NULL;

    string temp_title;
    int temp_date;
    string temp_month;
    cout<<"To update input title, date and month"<<endl;
    cin>>temp_title>>temp_date>>temp_month;

    // If head node itself holds
    // the key to be deleted
    if (temp != NULL && temp->title == temp_title&&temp->date==temp_date&&temp->month==temp_month)
    {
        *head_ref = temp->next; // Changed head
        delete temp;            // free old head
        return;
    }

    // Else Search for the key to be deleted,
    // keep track of the previous node as we
    // need to change 'prev->next' */
    else
    {
        while (temp != NULL && temp->title != temp_title&&temp->date!=temp_date&&temp->month!=temp_month)
        {
            prev = temp;
            temp = temp->next;
        }

        // If key was not present in linked list
        if (temp == NULL)
            return;

        // Unlink the node from linked list
        prev->next = temp->next;

        // Free memory
        delete temp;
    }
}


// Driver code
int main()
{
    // allocate 3 nodes in the heap

    Node* head = NULL;

    while(1)
    {
        cout<<"Add reminder press 1"<<endl;
        cout<<"Upade reminder press 2"<<endl;
        cout<<"Delete a specfic reminder press 3"<<endl;
        cout<<"View all the reminders of a specific month press 4"<<endl;
        cout<<"Exit press 0"<<endl;

        int input;
        cin>>input;


        switch(input)
        {
        case 1:
            add_reminder(&head);
            break;
        case 2:
            update_reminder(head);
            break;
        case 3:
            delete_reminder(&head);
            break;
        case 4:
            break;
        case 0:
            break;
        default:
            cout<<" Invalid input "<<endl;
        }

        printList(head);


    }



    return 0;
}

// This is code is contributed by rathbhupendra
