using namespace std;
void ex10(node* &top)
{
    /*
node* p;
node* top1 = NULL;
p = top;
PushData(top1,p->data);
p = LastUzel(top);
PushData(top1,p->data);
int k = p->uzel;
node* q = find_uzel(top,k);
PushData(top,q->data);
ShowList(top1);*/
node* top1 = NULL;
node* p = top;
while(p)
{
    PushData(top1,p->data);
    p = p->next;
}
ShowList(top1);
}
/*
void reverse_list(node* &first){
    node *previous = first;
    node *current = first->next;
    node *next = first->next->next;
    previous->next = NULL;

    while (next != NULL) {
        current->next = previous;
        previous = current;
        current = next;
        next = next->next;
    }
    current->next = previous;
}
*/
