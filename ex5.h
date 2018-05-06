using namespace std;
node* copy_sets(node* top)
{
	node* top1=NULL;

		while(top)
	{
	  PushData(top1, top->data);
	  top=top->next;
	}
   return top1;
}
int MulInfo(node* p)
{
    int k = 1;
    while(p)
    {
       k*= p->data;
       p = p->next;
    }
    return k;
}
int AddInfo(node* p)
{
    int k = 0;
    while(p)
    {
        k+=p->data;
        p = p->next;
    }
    return k;
}
int Min(node* p)
{
    int k = p->data;
    while(p)
    {
        if(p->data<k)
        k=p->data;
        p = p->next;
    }
    return k;
}
int MulInfoRec(node* p)
{

    if(p->next)
    {
       p->data*=MulInfoRec(p->next);
    }
    return p->data;
}
int AddInfoRec(node* p)
{

    if(p->next)
    {
       p->data+=AddInfoRec(p->next);
    }
    return p->data;
}
void MinRec(node* p, int &k)
{
    if(p)
    {
        if(p->data<=k)
        {
        k = p->data;
        }
        MinRec(p->next,k);
    }
}
void ex5(node* top)
{
    node* top1 = copy_sets(top);
    node* top2 = copy_sets(top);
    int k = 2000;
    cout << "Нахождение (минимального элемента, суммы и произведениe)" << endl;
    cout << "r - рекурсивно n-НЕрекурсивно" << endl;
    char a;
    cin >> a;
    if (a=='r')
    {
        ShowList(top);
        cout << "произведение элементов: " << MulInfoRec(top2) << endl;
        cout << "Сумма элементов: " << AddInfoRec(top1) << endl;
        MinRec(top,k);
        cout << "Минимум элементов: " << k << endl;
    }
    else
    {
        ShowList(top);
        cout << "произведение элементов: " << MulInfo(top) << endl;
        cout << "Сумма элементов: " << AddInfo(top) << endl;
        cout << "Минимум элементов: " << Min(top) << endl;
    }
}
