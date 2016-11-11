#include<iostream>
#include<cmath>
#include "2d_maciv.hpp"
Node zentr_mas(List &L){
double x_m;
double y_m;
Node*Main=new Node;
Main->next=NULL,Maim->prev=NULL;
int n=0;
Node*current=L.tail;
if(L.heat==NULL){
Main->x=0,Main->y=0;
rerurn Main;}
if(cur==NULL){
Main->x=(L.heat)->x,Main->y=(L.heat)->y;
return Main;
}
while(current!=NULL){
n++;
x+=cur->x;
y+=cur->y;}
Main->x=x_m/n,Main->y=y_m/n;
return Main;}
int main(){
Main_List_ptr=new List;
for(i=0;i<20,i++){
Node* N=new Node;
N->x=std::cos(i*i);
N->y=std::exp(65*i);
add((*Main_List_ptr),(*N);}
Node Z_M= zentr_mas((*Main_List_ptr));
