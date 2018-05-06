using namespace std;
bool is_num(node_nine* p)
{
    bool fl = true;
    int i = 0;
    int n = sizeof(p->data);
    while(n>=i && fl)
    {
        if(p->data[i]>'9')
           fl = false;
           i++;
    }
    return fl;
}
void show_nn(node_nine* top)
{
    while(top)
    {
        cout << top->data << endl;;
        top = top->next;
    }
}
void div_nn(node_nine* top, node_nine* &top1, node_nine* &top2)
{
    node_nine* p;
    node_nine* q;
    while(top)
    {

        if(is_num(top)){
            p = new node_nine;
            strcpy(p->data,top->data);
            p ->next = top1;
            top1 = p;
        }
        else{
            q = new node_nine;
            strcpy(q->data,top->data);
            q->next = top2;
            top2 = q;
        }
        top = top->next;
    }
}
void create_nn(node_nine* &top)
{
  char data[10];
  ifstream fin("cr_no_ni.txt");
  node_nine* p;
  while(fin >> data)
  {
      p = new node_nine;
      strcpy( p->data,data);
      p->next = top;
      top = p;
  }
}
void div_one_in_two(node* top, node* &ptop1, node* &ptop2, int k)
{
    for(int i = 0; i<=k; i++)
    {
        PushData(ptop1,top->data);
        top = top->next;
    }
    while(top)
    {
        PushData(ptop2,top->data);
        top = top->next;
    }
    nomeration(ptop1);
    nomeration(ptop2);
}
void div_chet_nainchet(node* top, node* &ptop1,node* &ptop2)
{
    while(top)
    {
        if(((top->uzel%2)==0)||(!top->uzel))
            PushData(ptop1,top->data);
        else
            PushData(ptop2,top->data);

        top = top->next;
    }
    nomeration(ptop1);
    nomeration(ptop2);
}
void ex9(node* &top)
{
    node* top1 = NULL;
    node* top2 = NULL;
   int choose,k;
   cout << "Разбиения списка" << endl;
   cout << "1.К первому подсписку К-элементов остальные ко второму"  << endl;
   cout << "2.К первому подсписку отнести четные а к второму нечетные порядковые номера" << endl;
   cout << "3.К первому подсписку отнести буквы к второму цифры" << endl;
   cin >> choose;
   switch(choose)
   {
   case 1:
    {
        cout << " Введите k " << endl;
        cin >> k;
        div_one_in_two(top,top1,top2,k);
        cout << "список 1" << endl;
        ShowList(top1);
        cout << "список 2" << endl;
        ShowList(top2);
        break;
    }
   case 2:
    {
        div_chet_nainchet(top,top1,top2);
        cout << "список 1" << endl;
        ShowList(top1);
        cout << "список 2" << endl;
        ShowList(top2);
        break;
    }
   case 3:
   {
       node_nine* top_nn = NULL;
       create_nn(top_nn);
       node_nine* top_nn1 = NULL;
       node_nine* top_nn2 = NULL;
       cout << "исходный список" << endl;
       show_nn(top_nn);
       div_nn(top_nn,top_nn1,top_nn2);
       cout << "подсписок из цифр" << endl;
       show_nn(top_nn1);
       cout << "подсписок из букв и символов" << endl;
       show_nn(top_nn2);
       break;
   }
   default : {
   ex9(top);
   }
   }
}
