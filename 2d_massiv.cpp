#include 2d_maciv.hpp
void add(List &L, Node &N,int pos=0){
if(L.heat!=NULL){
Node* cur=L.tail;
if(cur==NULL){
N.prev=NULL;
N.next=L.heat;
L.tail=(&N);
return;}
else{
while(pos!=0 && cur!=NULL){
cur=cur->next;}
if(cur==NULL){
N.next=NULL;
N.prev=L.heat;
L.heat=(&N);
return;}
else{
Node.next=cur;
Node.prev=cur->prev;
cur->=(&N);
return;}}}
else{
L.tail=NULL;
N.prev=L.tail;
N.next=NULL;
L.heat=(&N);}
}
elif(L.tail)}}
Node find(List &L,Node &current){
Node N=current;
double x=N.x;
double y=N.y;
Node* cur=L.tail;
Node* begin=NULL;
Node* end=NULL;
while(cur!NULL{
if(begin==NULL && x==cur->x && y==cur->y){
begin=cur;}
if(end==NULL && x==cur->x && y==cur->y){
end=cur;}
cur=cur->next;}
N->next=end;
N->prev=begin;
return N}
void delit(List &L,int pos){
Node* cur=L.tail;
while(pos!=0 && cur!=NULL ){
cur=cur->next;}
if(cur==NULL){
cur=L.heat;
(*(cur->prev))=NULL;
L.heat=cur->prev;
delete cur
return;}
(cur->prev)->next=(cur->next);
delete cur;
return;}