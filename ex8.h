using namespace std;
void add_before_uz(node* &top, node* q, int x)
{
       node* p,*r ;
       p = new node;
       r=previous(top,q);
      if (q==top)
      PushData(top,x);
      else
          if (r==NULL)
          {
          cout<<" sorry, impossible insert element"<<endl;
         	exit(-1);
          }
          else
          {
          	p->data=x;
          	p->next=r->next;
          	r->next=p;
           }
}
void add_in_the_end(node* &top,int x)
{
     node* q = LastUzel(top);
     node* p;
     p = new node;
     p->data=x;
     p->next=q->next;
     q->next=p;
}

void ex8(node* &top)
{
    cout << "�������� ���� ������ ��������� ����� �������" << endl;
    cout << "1.����� ������ �����" << endl;
    cout << "2.����� �-��� �����" << endl;
    cout << "3.����� ���������� ����" << endl;
    int choose,data,uzel;
    cin >> choose;
    switch(choose){
        case 1:
        {
        cout << "������� ���� ���� ������� ������ ��������" << endl;
        cin >> data;
        node* p = find_uzel(top,0);
        add_before_uz(top,p,data);
        nomeration(top);
        ShowList(top);
        break;
        }
        case 2:
        {
        cout << "������� ����� ���� ����� ������� ������ �������� ����" << endl;
        cin >> uzel;
        cout << "������� ���� ���� ������� ������ ��������" << endl;
        cin >> data;
        node* p = find_uzel(top,uzel);
        add_before_uz(top,p,data);
        nomeration(top);
        ShowList(top);
        break;
        }
        case 3:
        {
        cout << "������� ���� ���� ������� ������ �������� � ����� ������" << endl;
        cin >> data;
        add_in_the_end(top,data);
        nomeration(top);
        ShowList(top);
        break;
        }
    }
}
