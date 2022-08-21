#include <iostream>
using namespace std;
class Node{
public:
	int data;
	Node *next;
};
class LinkList{
public:
	int DataValue;
	Node *head;
	Node *tail;
	LinkList(){
		head = NULL;
		tail = NULL;
	}
	//Insert node at head
	void insertNode_head(int posi_head){
		cout << "Enter the value you want to insert at the head of the linklist :" << endl;
		cin >> posi_head;
		Node *ptr = new Node;
		ptr->data = posi_head;
		ptr->next = head;
		if (tail == NULL){
			head = ptr;
			tail = ptr;
			ptr = NULL;
			delete ptr;
		}
		else{
			head = ptr;
			ptr = NULL;
			delete ptr;
		}

    }
	//Insert node at tail
	void insertNode_tail(int posi_tail){
		cout << "Enter the value you want to insert at the tail of the linklist :" << endl;
		cin >> posi_tail;
		Node *ptr = new Node;
		ptr->data = posi_tail;
		ptr->next = NULL;
		if (head == NULL){
			head = ptr;
			tail = ptr;
			ptr = NULL;
			delete ptr;
		}
		else{
			tail->next = ptr;
			tail = ptr;
			ptr = NULL;
			delete ptr;
		}
	}
	//Delete node at head
	void delNode_head(){
		Node *ptr = new Node;
		ptr = head;
		head = head->next;
		ptr = NULL;
		delete ptr;
		cout << "Head node deleted!" << endl;
	}
	//Delete node at tail
	void delNode_tail(){
		Node *ptr = new Node;
		for (Node *i = head; i != tail;){
			ptr = i;
			i = i->next;
		}
		ptr->next = NULL;
		tail = ptr;
		ptr = NULL;
		delete ptr;
		cout << "Tail node deleted!" << endl;
	}
	//Display function for linklist
	void Display(){
		cout << "The data stored in the nodes of linklist is :" << endl;
		for (Node *i = head; i != tail;){
			cout << i->data << endl;
			i = i->next;
		}
		cout << tail->data << endl;
	}
};
int main(){
	LinkList obj;
	obj.insertNode_tail(obj.DataValue);
	obj.insertNode_tail(obj.DataValue);
	obj.insertNode_head(obj.DataValue);
	obj.Display();
	obj.delNode_head();
	obj.Display();
	obj.delNode_tail();
	obj.Display();
	cout << endl;
	system("pause");
	return 0;
}