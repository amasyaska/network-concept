// magic numbers

#define ERROR_ADDING 0
#define SUCCESSFUL_ADDING 1

class Hub
{
	/*
	 * this class is a container for nodes
	 */
private:
	// hashtable field (we can use vector, but how will we be founding element by index, I suggest to use hashtable (object -> address) instead) (STL doesn't have hashtable implemented bruh)
	std::vector< std::pair<Node *, unsigned long long> > container;		// pair: node pointer to address (uint64_t)
	unsigned long long address_top;						// when we add new node, we add to address_top
public:
	Hub(void);
	~Hub(void);

	int add_node(Node const *ptr_node);
	int remove_node(Node const *ptr_node);
};
