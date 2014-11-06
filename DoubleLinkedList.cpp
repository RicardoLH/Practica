#include <iostream>
using namespace std;
struct Node{
	int value;
	Node *next = NULL;
	Node *prev = NULL;
};
Node *head = NULL;
void push( int val ){
	if( head == NULL ){
		head = new Node;
		head->value = val;
		head->prev = head->next = NULL;
	}else{
		bool inserted = false;
		if( head->value > val ){
			Node newNode = new Node;
			newNode->value = head->value;
			newNode->next = head->next;
			newNode->prev = head;
			head->value = val;
			head->next = newNode;
			inserted = true;
		}
		Node *temp = head;
		while(!inserted){
			if(temp->value > val){
				Node *newNode = new Node;
				newNode->next = temp;
				newNode->prev = temp->prev;
				(temp->prev)->next = newNode;
				temp->prev = newNode;
			}else if( temp->next == NULL ){
				Node *newNode = new Node;
				temp->next = newNode;
				newNode->value = val;
				newNode->prev = temp;
				newNode->next = NULL;
			}
		}
	}
	
}
int main() {
	// your code goes here
	return 0;
}
