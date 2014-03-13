template <class T>

class doublyLinkedList
{
public:

private:
	//Node creation for the double linked list
	struct node{
		T data;
		//Pointer to the address of the previous node
		node *prev;
		//Pointer to the address of the next node
		node *next;
	};

	//Pointer to the address of the first node
	node *first;
	//Pointer to the address of the last node
	node *last;

};