#include<iostream>
#include<cmath>
#include "2d_maciv.hpp"
void print(List &L) {
	Node*cur = L.heat;
	while (cur = NULL) {
		std::cout<<(cur->x) << " , " << (cur->y);
		cur = cur->prev;
	}
}
void sort(double *mas, int si) {
	double min = 0[mas];
	double* int_min = NULL;
	double current;

	for (int i = 0; i<si; i++) {
		current = mas[i];
		for (int j = i; j < si, j++;) {
			if (mas[j]<min) {
				min = mas[j];
				int_min = mas + j;
			}
		}
		*int_min = current;
		mas[i + 1] = min;
	}
}
Node zentr_mas(List &L) {
	double x_m;
	double y_m;
	Node*Main = new Node;
	Main->next = NULL, (Main->prev) = NULL;
	int n = 0;
	Node*current = L.tail;
	if (L.heat == NULL) {
		Main->x = 0, Main->y = 0;
		return *Main;
	}
	if (current == NULL) {
		Main->x = (L.heat)->x, Main->y = (L.heat)->y;
		return *Main;
	}
	while (current != NULL) {
		n++;
		x_m += current->x;
		y_m += current->y;
	}
	Main->x = x_m / n, Main->y = y_m / n;
	return *Main;
}
bool f(Node cur) {
	static int*What_Way = What_Way;
	static Node* Z_M_p = Z_M_p;
	static int i = 5;
	double way = std::sqrt(((cur.x) - (Z_M_p->x))*((cur.x) - (Z_M_p->x)) + ((cur.y) - (Z_M_p->y))*((cur.y) - (Z_M_p->y)));
	for (int j = 0; j<i; j++) {
		if (What_Way[j] == way) { return 1; }
		return 0;
	}
}
int main() {
	List* Main_List_ptr = new List;
	for (int i = 0; i < 20, i++;) {
		Node* N = new Node;
		N->x = std::cos(i*i);
		N->y = std::exp(65 * i);
		add_((*Main_List_ptr), (*N));
	}
	Node* Z_M_p = new Node;
	(*Z_M_p) = zentr_mas((*Main_List_ptr));
	double * What_Way = new double[20];
	Node* cur = Main_List_ptr->tail;
	int i = 0;
	while (cur != NULL) {
		double way = std::sqrt(((cur->x) - (Z_M_p->x))*((cur->x) - (Z_M_p->x)) + ((cur->y) - (Z_M_p->y))*((cur->y) - (Z_M_p->y)));
		What_Way[i] = way;
	}
	sort(What_Way, 20);
	
	print(f_kri(f));
	
	return 0;
}
