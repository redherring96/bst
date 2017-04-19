#include <iostream>
#include <string>
using namespace std;

struct node {
	node *left;
	node *right;
	int val;
	node(){
		left = nullptr;
		right = nullptr;
	};
	node(int v){
		val = v;
		left = nullptr;
		right = nullptr;
	}
};

class bst {
	private:
		node *root;
	public:
		addNode(int val){
			node *newNode = new node(val);
			node *rootPtr = head;
			if(rootPtr = nullPtr){
				rootPtr = newNode;
			}else{
				if(rootPtr = )
			}
		}
};
