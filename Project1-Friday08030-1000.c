#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <conio.h>
#include <time.h>

#define N 100 //gia to 8o erotima to prokathorismeno orio 
 
 struct node{
 	int id;
    int megethos;
    char *name; 
    time_t xronos_eisodou;
    char *katastasi;
    double xronos_ektelesis;
    struct node *next;
    struct node *prev;
}; 

struct Queue { 
    int id;
    int megethos;
    char *name; 
    time_t xronos_eisodou;
    char *katastasi;
    double xronos_ektelesis;
    struct  node *front;
	struct node *rear; 
	struct node *next;
}; 

 struct node *create_ll(struct node *);
 struct node *create_random(struct node *);
 struct node *start = NULL;
 struct Queue *top = NULL;
 struct Queue *createQueue(struct Queue *);
 struct node *delete_beg(struct node *);
 struct node *delete_node(struct node *);
 struct node *modify_list(struct node *);
 struct Queue *transfer(struct Queue *);
 void Dequeue(struct Queue *);
 struct Queue *modify_queue(struct Queue *);
 struct node *printNode(struct node *);
 struct Queue*printQueue(struct Queue *);
 struct node *sort_list(struct node *);
 
int main(){
	int i;
	int pithanotita ;   

	struct node n;
	
	//erotima 1
	start = create_ll(start);
	start = sort_list(start);//7o erotima
	start = printNode(start);
	top = printQueue(top);
	
	//erotima 2
	for(i=0;i<10000;i++){
		
		pithanotita = rand() % 100+1 ;  
		
		//erotima 3
		if(pithanotita <= 30){
		start = create_random(start);
		start = sort_list(start);//7o erotima
			start = printNode(start);
			top = printQueue(top);
			
		}
		
		//erotima 4
		if(pithanotita<=20){
			top=createQueue(top);
			start=modify_list(start);
			top=transfer(top);
			start=delete_node(start);
			start = printNode(start);
           	top = printQueue(top);
		}
		
	}
	printf("keno");
		//erotima 5
	if(n.katastasi=="pros ektelesi"){
		void Dequeue();
		top=modify_queue(top);
		
	}
	printf("keno");
	
	//erotima 8
	if(N==sizeof(n)){
		printf("Den epitrepetai kamia nea prosthiki efarmogis. \n");
		}
		else if (N*0.2>=sizeof(n)){
			start=create_ll(start);
			start = sort_list(start);//7o erotima
			start = printNode(start);
	        top = printQueue(top);
		}
printf("keno");	
	 return 0;
	 
}

struct node *create_ll(struct node *start){    //i sinartisi create mas xrisimevei sto 1o erotima gia ti dimiourgia tis dipla sisdedemeni lista
struct node *new_node, *ptr;

   int i,efarmoges;
   int id1,megethos1;
   char *katastasi1,*name1;
   double xronos_ektelesis1,xronos_eisodou1;

   printf("\n Enter the number of applicatios: ");
   scanf("%d", &efarmoges);

  for(i=0;i<efarmoges;i++){
		printf("\n Enter id: ");
        scanf("%d", &id1);
        printf("\n Enter megethos: ");
        scanf("%d", &megethos1);
        printf("\n Enter name: ");
        fflush(stdin);
        scanf("%s", &name1);
        xronos_eisodou1 = time(NULL);
        katastasi1="anamoni"; 
        xronos_ektelesis1=-1;

        if(start == NULL){
        	new_node = (struct node*)malloc(sizeof(struct node));
            new_node -> prev = NULL;
            new_node -> id= id1;
            new_node->megethos=megethos1;
            new_node->name=name1;
            new_node->xronos_eisodou=xronos_eisodou1;
            new_node->katastasi=katastasi1;
            new_node->xronos_ektelesis=xronos_ektelesis1;
            new_node -> next = NULL;
            start = new_node;
            }
        else{
        	ptr=start;
            new_node = (struct node*)malloc(sizeof(struct node));
            new_node -> id= id1;
            new_node->megethos=megethos1;
            new_node->name=name1;
            new_node->xronos_eisodou=xronos_eisodou1;
            new_node->katastasi=katastasi1;
            new_node->xronos_ektelesis=xronos_ektelesis1;
            while(ptr->next!=NULL)
             ptr = ptr->next;
            ptr->next = new_node;
            new_node->prev=ptr;
            new_node->next=NULL;
        }
    }
    return start;
}

struct node *create_random(struct node *start){    //i sinartisi create mas xrisimevei sto 3o erotima gia ti dimiourgia tis listas me tixaies times
struct node *new_node, *ptr;

  char *katastasi1;
  double xronos_ektelesis1,xronos_eisodou1;

  xronos_eisodou1 = time(NULL);
  katastasi1="anamoni"; 
  xronos_ektelesis1=-1;

  if(start == NULL){
  	new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> prev = NULL;
    new_node -> id= rand() % 100;
    new_node->megethos=rand() % 100;
    new_node->name= (char)(rand(127-33) + 33);
    new_node->xronos_eisodou=xronos_eisodou1;
    new_node->katastasi=katastasi1;
    new_node->xronos_ektelesis=xronos_ektelesis1;
    new_node -> next = NULL;
    start = new_node;
    }
  else{
  	ptr=start;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> id= rand() % 100;
    new_node->megethos= rand() % 100;
    new_node->name= (char) (rand(127-33) + 33);
    new_node->xronos_eisodou=xronos_eisodou1;
    new_node->katastasi=katastasi1;
    new_node->xronos_ektelesis=xronos_ektelesis1;
    while(ptr->next!=NULL)
     ptr = ptr->next;
    ptr->next = new_node;
    new_node->prev=ptr;
    new_node->next=NULL;
   }

   return start;
}

//gia to 4o erotima allazoume tin katastasi apo "anamoni" se "pros ektelesi"
struct node *modify_list(struct node *start){
	struct node *ptr;
	ptr->katastasi="pros ektelesi";
	return start;
}

struct node *delete_beg(struct node *start){
    struct node *ptr;
    ptr = start;
    start = start -> next;
    start -> prev = NULL;
    free(ptr);
    return start;
}

//diagrafh enos komvou sigkekrimena tou komvou katastasi pou exei timi "pros ektelesi"
struct node *delete_node(struct node *start){
  struct node *ptr;

  char* val="pros ektelesi";
   ptr = start;
   if(ptr -> katastasi == val){
     start = delete_beg(start);
     return start;
}
   else{
     while(ptr -> katastasi!= val)
     ptr = ptr -> next;
     ptr -> prev -> next = ptr -> next;
     ptr -> next -> prev = ptr -> prev;
     free(ptr);
     return start;
}
}


//gia to erotima 4 dimiourgo mia adeia oura 
struct Queue *createQueue(struct Queue *top) {
  struct Queue *q; 
    q = (struct Queue*)malloc(sizeof(struct Queue)); 
    q->front = q->rear = NULL;  
    return q; 
}

struct Queue *transfer(struct Queue *top){
	struct Queue *q;
	struct node *n;
	
	q->id=n->id;
	q->megethos=n->megethos;
	q->name=n->name;
	q->katastasi=n->katastasi;
	q->xronos_eisodou=n->xronos_eisodou;
	q->xronos_ektelesis=n->xronos_ektelesis;
	
    return top;
}

//gia to 5o erotima
void Dequeue(struct Queue *top) {
  struct Queue* front=front;
  struct Queue* rear=rear;
  if(front== NULL) {
  	printf("Queue is Empty\n");
    return;
    }
    if(front == rear) {
     front = rear = NULL;
    }
    else {
    front = front->next;
    }
    free(front);
}

//gia to 5o erotima 
struct Queue *modify_queue(struct Queue *top){

	struct Queue* q;
	q->xronos_ektelesis=rand()%10+1;
	q->katastasi="ekteleitai";
	return top;
	
}
 
 //i ektiposi gia to 6o erotima 
struct node *printNode(struct node *start){
	struct node *n;

	if(n->katastasi=="anamoni"){
		printf("\n Megethos listas me efarmoges se katastasi anamonis %d",n->megethos);
	}
	return start;
	
}

//i ektiposi gia to 6o erotima
struct Queue *printQueue(struct Queue *top){
		struct Queue *q;
	
	if(q->katastasi=="ekteleitai"){
		printf("\nMegethos ouras pros ektelesi %d",q->megethos);
	}
	return top;
}

//taksinomisi listas gia to 7o erotima 
struct node *sort_list(struct node *start){
  struct node *ptr1, *ptr2;
  int temp;
  ptr1 = start;
  while(ptr1 -> next != NULL){
  	ptr2 = ptr1 -> next;
    while(ptr2 != NULL){
    	if(ptr1 -> megethos > ptr2 -> megethos){
    		temp = ptr1 -> megethos;
            ptr1 -> megethos = ptr2 -> megethos;
            ptr2 -> megethos = temp;
            }
        ptr2 = ptr2 -> next;
        }
    ptr1 = ptr1 -> next;
    }
return start;
}

