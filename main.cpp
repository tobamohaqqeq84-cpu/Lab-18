//Toba Mohaqqeq 
//COMSC-210
//lAB-18

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// each node holds a rating and a comment.
struct Node {
      float rating;
      string comment;
      Node* next; // pointer to next node in the list.
            };
// function prototypes.
void addAtHead(Node*& head, float rating, string comment);
void addAtTail(Node*& head, float rating, string comment);
void outputList(Node* head); 

int main() {
    Node* head = nullptr; // stars with empty list 
    int choice;
    char again;
    float rating;
    string comment;
         
    cout << "Which linked list Method should we use?\n"; 
    cout << "    [1] New nodes are added at the head of linked list.\n";
    cout << "    [2] New nodes are added at the tail of linked list.\n";
    cout << "    Choice: ";
    cin >> choice;
    cin.ignore();

    do {
      cout << "Enter review rating 0-5: "; // asks for review info.
      cin >> rating; 
      cin.ignore();
      cout << "Enter review comments: ";
      getline(cin, comment);


      if (choice == 1) 
        addAtHead(head, rating, comment);
      else
        addAtTail(head, rating, comment);

      cout << "Enter another review? Y/N: ";
      cin >> again;
      cin.ignore();
        }
    while (again == 'Y' || again == 'y'); //loop until user says no.

    //shows all the reviews  
    cout << "Outputting all reviews:\n";
    outputList(head);

    //deletes all the nodes in the list.
    Node* current = head;
    while (current) {
      Node * temp = current;
      current = current->next;
      delete temp; 
    }

    head = nullptr;
  
  return 0;
  }

void addAtHead(Node*& head, float rating, string comment) {
  Node* newNode = new Node;
  newNode->rating = rating;
  newNode->comment = comment;
  newNode->next = head;
  head = newNode;
}

void addAtTail(Node*& head, float rating, string comment){
  
  Node* newNode = new Node;
  newNode->rating = rating;
  newNode->comment = comment;
  newNode->next = nullptr;
  if (!head) {
    head = newNode;
    return;}

  Node* current = head;
  while (current->next) 
    current = current->next;
    
  }
 void outputList (Node* head){
     if(!head){
     cout << "No reviews yet.\n";
     return;}
   
   Node* current = head; 
   int count = 0;
   float total =0;
   
   while (current) {
     cout << "    > Review #"  << ++count << ": " << current->rating << " : " <<            current->comment << "\n";
     
       total += current->rating;
       current = current->next;
   }
   if (count > 0){
      cout << fixed << setprecision(5);
      cout << "    > Average: " << (total/count) << endl;
   }
   
 }