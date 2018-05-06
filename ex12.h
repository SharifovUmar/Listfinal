using namespace std;
void sort_node(node* top)
{
	int data;
    node* p = top;
    node* q;
    while (p->next)
	  {
        q=p->next;
        while(q)
        {
            if (p->data>q->data)
            {
                data=p->data;
                p->data=q->data;
                q->data=data;

            }
                q=q->next;
        }
                p=p->next;
	  }
}

void ex12(node* &top1, node* &top2)
{
  sort_node(top1);
  sort_node(top2);
  ShowList(top1);
  ShowList(top2);
  concot(top1,top2);
  cout << "Упорядоченный и объединенный список:" << endl;
  sort_node(top1);
  ShowList(top1);
}
