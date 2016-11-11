#ifndef 2d_masiv
#define 2d_masiv

struct Node
{
	Node* next;
	Node* prev;
	double x;
  duble y;
};
struct List
{
	Node* head;
	Node* tail;
};
Node find(List &L,Node &current);
void add(List &L, Node &N,int pos=0);
void delit(List &L,int pos);
bool zentr(Node N);
List f_kri((bool (*f)(Node N));




















#endif
