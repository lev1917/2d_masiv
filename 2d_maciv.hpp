#ifndef 2d_masiv
#define 2d_masiv

struct Node
{
	Node* next;
	Node* prev;
	double x;
	double y;
};
struct List
{
	Node* heat;
	Node* tail;
};

Node find(List &L, Node &current);
void add_(List &L, Node &N, int pos = 0);
void delit(List &L, int pos);
bool zentr(Node N);
List f_kri(List &L,bool(*f)(Node ));

















#endif
