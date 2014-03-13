template <class T>

class Node
{
public:

	//Node creation for the double linked list
	T data;

	//Pointer to the address of the previous node
	Node *prev;
	//Pointer to the address of the next node
	Node *next;

	//Pointer to the address of the first node
	Node *first;
	//Pointer to the address of the last node
	Node *last;

	//Default constructor
	Node();

	//Destructor
	~Node();

private:

};

template <class T>
Node<T>::Node(){};

template <class T>
Node<T>::~Node(){};