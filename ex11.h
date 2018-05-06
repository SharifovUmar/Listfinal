using namespace std;
bool ex11(node* top1, node* top2)
{
    node* p = top1;
    node* q = top2;
    bool fl = true;
        while(p->next)
        {
            if(p->data == q->data)
            {
            fl = true;
              top1 = p;
              top2 = q;
                 while((top2->next) && fl)
                {
                 if(top1->data !=top2->data)
                 fl = false;
                 top1 = top1->next;
                 top2 = top2->next;
                }
                if(!top2 && fl)
                {
                    return fl;
                }
            }
           p = p->next;
        }

        return fl;
}
