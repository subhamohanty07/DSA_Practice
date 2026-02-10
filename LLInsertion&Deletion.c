#include<stdio.h>
#include<stdlib.h>

struct Node{
    int val;
    struct  Node* next;    
};

//(====================== INSERTION =====================)

struct Node* insertionBeginning(struct Node* head, int val){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr ->val = val;
    ptr->next = head;
    return ptr;

}

struct Node* insertionInBetween(struct Node* head, int val, int idx){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;
    while (i!= idx-1)
    {
        p = p->next;
        i++;        
    }
    ptr->val = val;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node* insertionAtEnd(struct Node* head, int val){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->val = val;
    ptr->next = NULL;
    p->next = ptr;

    return head;    
}

struct Node* insertionAfterANode(struct Node* head, struct Node* prenode, int val){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->val = val;
    struct Node* p = head;
    while (p->next != prenode->next)
    {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;

    return head;       
}


//(====================== DELETION =====================)

struct Node* DeletionBeginning(struct Node* head){
    struct Node* ptr = head;
    head = ptr->next;
    free(ptr);
    return head;    
}

struct Node* DeletionInBetween(struct Node* head, int idx){
    struct Node* p = head;
    int i = 0;
    while (i != idx - 1)
    {
        p = p->next;
        i++;
    }
    struct Node* q = p->next;
    p->next = q->next;
    free(q);
    return head;   
}

struct Node* DeletionAtEnd(struct Node* head){
    struct Node* p = head;
    while (p->next->next!=NULL)
    {
        p = p->next;
    }
    p->next = NULL;
    free(p->next);
    return head;
}

struct Node* DeletionAfterANode(struct Node* head, struct Node* preNode){
    struct Node* p = head;
    while (p->next != preNode)
    {
        p = p->next;
    }
    p->next = preNode->next;
    free(preNode);
    return head;    
}

//(================= DISPLAY ==================)


void display(struct  Node* ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->val);
        ptr = ptr -> next;
    }    
}


int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));

    head->val = 01;
    head->next = second;

    second->val = 02;
    second->next = third;

    third ->val = 03;
    third -> next = fourth;

    fourth -> val = 04;
    fourth -> next = NULL;

    printf("LinkedList Befor Insertion!\n");
    display(head);

    // head = insertionBeginning(head, 50);

    // head = insertionInBetween(head, 12, 2);

    // head = insertionAtEnd(head, 57);

    // head = insertionAfterANode(head, third, 27);

    // head = DeletionBeginning(head);

    // head = DeletionInBetween(head, 3);

    // head = DeletionAtEnd(head);

    head = DeletionAfterANode(head, second);
    
    printf("LinkedList After Insertion!\n");
    display(head);

    return 0;
}