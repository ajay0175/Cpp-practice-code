#include<bits/stdc++.h>
using  namespace std;

#define int         long long
#define vi          vector<int>
#define pii         vector<pair<int,int>>
#define ms          multiset
#define pb          push_back
#define pob         pop_back
#define ff          first
#define ss          second
#define stp(x)      fixed << setprecision(x)
#define fst         ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inf         1e18
#define mod         1000000007

void io(){
  fst

  #ifndef ONLINE_JUDGE
    freopen("INPUT.txt", "r", stdin);
    freopen("OUTPUT.txt", "w", stdout);
  #endif


}

class node{

public:
  int data;      // data of node to be stored
  node *next;   // addresss of node to be stored
  node *prev;    // previous node for the deletion of last node

  node(int d){      // It is a single node ( it is a constructor  also)
    data = d;      // data of single node
    next = NULL;   // next node is null because it is single node or linked list
    prev = NULL;
  }
};

class Linkedlist {
public:
   node * head;
   node * tail;
   int size;

   Linkedlist(){
     head = NULL;
     tail = NULL;
     size = 0;
   }

  void push_front(int d){  // adding a new node to the front of the linked list
      
    node * new_head = new node(d); // making a new node

    if(head == NULL){
      tail = new_head , head = new_head;
    }
    else{
      new_head ->next = head;     // updating the address of the new node
      head ->prev = new_head;     // for deletion of last node we need to update the previous of head  with new head
      head = new_head;            // updating the head with the head
    }
    size++;
  }

  void push_back(int d){    // adding the new node to the back of linked list

    node * new_tail = new node(d);

    if(tail == NULL){
      head = new_tail , tail = new_tail;
    }
    else{
      tail ->next = new_tail;
      new_tail ->prev = tail;
      tail = new_tail;
    }
    size++;
  }

  node *insert(node *curr , int d){  // insert just after the current node
    node *new_node = new node(d);

    new_node ->next = curr->next;  // updating the new_node with next of the curr_node  (current node)
    curr->next = new_node;     // updating the next of the current node with the new node
    
    new_node -> prev = curr;

    if(new_node->next)
      new_node ->next->prev = new_node;
    else
      tail = new_node;

    size++;

    return new_node;
  }

  void pop_back(){
    if(!tail)
      return;

    if(!(tail -> prev)){
      delete head;
      head = tail = NULL;
    }

    else{
      node *new_tail = tail ->prev;

      new_tail ->next = NULL;
      delete tail;

      tail = new_tail;
    }

    size--;
  }

  void pop_front(){  //Deleting the front node
    if(!head)
      return;

    if(!(head ->next)){
      delete head;
      head = tail = NULL;
    }

    else{
      node *new_head = head ->next;

      delete head;
      new_head ->prev = NULL;

      head = new_head;
    }

    size--;
  }

  void pop(node *curr){ // Deleting the current node
    if(size == 1){
      delete curr;
      head = tail = NULL;
    }

    // prev -> next , next -> prev = cprev

    if (curr->prev)
      curr->prev->next = curr ->next;

    if(curr->next)
      curr->next->prev = curr->prev;

    if(curr == head)
      head = curr->next;

    if(curr == tail)
      tail = curr->prev;

    delete curr;
    size--;
  }

  void print_iter(){
    node *curr = head;

    while(curr){
      cout << curr->data << " ";
      curr = curr->next;
    }
    cout<< '\n';
  }

  void print_rec_aux(node *curr){
    if(!curr)
      return;

    cout<< curr->data << " ";
    print_rec_aux(curr ->next);
  }

  void print_rec(){
    print_rec_aux(head);
    cout<< '\n';
  }

};

signed main() {

  io();

  Linkedlist l;

  for(int i = 1; i <= 10; i++){
    l.pb(i);
  }

  l.print_iter();

  l.pop_back();
  l.print_iter();

  l.pop_front();
  l.print_iter();

  auto e = l.insert(l.head , 12);
  l.print_iter();

  cout<< l.size << '\n'; // current sizre of Linded List 

  l.pop(e);
  l.print_iter();

  l.pop(l.head);
  l.print_iter();

  l.pop(l.tail);
  l.print_iter();

  return 0;
}