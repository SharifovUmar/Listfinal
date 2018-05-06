using namespace std;
void delete_element(node* &top, int uzel)
{
    node* p = find_uzel(top,uzel);
    node *r;
    if(top==p)
       pop(top);
    else
    {
        r = previous(top,p);
        r->next = p->next;
        delete p;
    }
}
void delete_element_data(node* &top, int data)
{
        node* p = find_data(top,data);
        node *r;
        if(p){
            if(top==p)
                   pop(top);
            else
            {
                r = previous(top,p);
                r->next = p->next;
                delete p;
            }
        }

}
void delete_all_data(node* &top, int data)
{
    while(FindAddress(top,data))
    {
        delete_element_data(top,data);
    }
}
void ex7(node* &top)
{
    int temp;
    cout << "�������� ������ ���������� �������� �� ������"<< endl;
    cout << "1.������� ������ ����"<< endl;
    cout << "2.������� �-��� ���� "<< endl;
    cout << "3.������� ��������� ����"<< endl;
    cout << "4.������� ���� � �������� ��������� ���� ����"<< endl;
    cin >> temp;
    switch(temp)
    {
    case 1:
        {
            cout << "�������� ������" << endl;
            ShowList(top);
            delete_element(top,0);
            cout << "�� ������� ������ ���� ��� ������� 0"<<endl;
            ShowList(top);
            break;
        }
    case 2:
        {
            cout << "�������� ������" << endl;
            ShowList(top);
            int uz;
            cout << "�������� ���� ������� ������ ������� " << endl;
            cin >> uz;
            delete_element(top,uz);
            ShowList(top);
            cout << "�� ������� ���� ��� ������� " << uz << endl;
            break;
        }
    case 3:
        {
            cout << "�������� ������" << endl;
            ShowList(top);
            node* p = LastUzel(top);
            delete_element(top,p->uzel);
            cout << "����� �������� ���������� ����" << endl;
            ShowList(top);
            break;

        }
    case 4:
        {
            int data;
            cout << "�������� ������" << endl;
            ShowList(top);
            cout << "������� ���� ���� ������� ������ �������  " << endl;
            cin >> data;
            delete_all_data(top,data);
            ShowList(top);
            break;

        }
    default:
        ex7(top);
    }
}
