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
void outputList (Node* head);

int main() {
    Node* head = nullptr; // stars with empty list 
    int choice;
    char again;
    float rating;
    string comment;
         }
    cout << "Which linked list Method should we use?" << endl;
    cout << "    [1] New nodes are added at the head of linked list."; <<endl;
    cout << "    [2] New nodes are added at the tail of linked list.";
    cout << "    Choice: ";
    cin >> choice;
    cin.ignore();

    do {
      cout << "Enter review rating 0-5: "; // asks for review info.
      cin >> rating; 
      cin.ignore();
      cout << "Enter review comment: ";
      getline(cin, comment);


      if (choice == 1) 
        addAtHead(head, rating, comment);
      else
        addAtTail(head, rating, comment);

      cout << "Enter another review? (Y/N): ";
      cin >> again;
      cin.ignore();
        }
    while (again == 'Y' || again == 'y') //loop until user says no.
       cout << "Outputting all reviews:\n";
