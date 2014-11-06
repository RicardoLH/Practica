#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;
struct Node{
	int value;
	bool isHead;
	Node *next = NULL;
};
Node *head = NULL;
void push( int val ){
	bool inserted = false;
	if( head == NULL ){
		head = new Node;
		head->value = val;
		head->isHead = true;
		head->next = head;
	}else{
		Node *temp = head;
		if( head->value > val ){
			Node *newNode = new Node;
			newNode->value = head->value;
			newNode->next = head->next;
			head->next = newNode;
			head->value = val;
			inserted = true;
		}
		while( !inserted ){
			if( temp->value < val && (temp->next)->value > val ) {
				Node *newNode = new Node;
				newNode->value = val;
				newNode->next = temp->next;
				temp->next = newNode;
				inserted = true;
			}else if( (temp->next)->value < temp->value ){
				Node *newNode = new Node;
				newNode->value = val;
				newNode->next = head;
				temp->next = newNode;
				inserted = true;
			}
			temp = temp->next;
		}
	}
}

int main(){
	push(10);
	push(1);
	push(5);
	push(11);
	Node *temp = head;
	while(true) {
    	printf("%d ",temp->value);
     	temp = temp->next ;
      	if( temp->isHead ) break;
   }
    return 0;
}
