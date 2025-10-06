//Toba Mohaqqeq 
//COMSC-210
//lAB-18

#include <iostream>
#include <string>
using namespace std;

// each node holds a rating and a comment.
struct Node {
      float rating;
      string comment;
      Node* next; // pointer to next node in the list.
                };
// function prototypes.
void addAtHead (Node*& head, float rating, string comment);
void addAtTail (Node*& head, float rating, string comment);
void printlist (Node* head);

int main(){
    Node* head = nullptr;
    int choice;
    char again;
    float rating;
    string comment;
         }
    cout << "Which linked list Method should we use?\n";
    cout << "    [1] New nodes are added at the head of linked list\n";
    cout << "    [2] New nodes are added at the tail of linked list\n";
    cout << "    Choice: ";
    cin >> choice;
    cin.ignore();

    do {
      cout << "Enter review rating 0-5: ";
      cin >> rating; 
      cin.ignore();
        "
      
    }
