using namespace std;
bool notin(node* top, int data)
{
    bool fl = true;
    while(top)
    {
      if(top->data == data)
        fl = false;
      top->next;

    }
    return fl;
}
bool is_Member(node* top, int data)
{
   if (FindAddress(top, data))
        return true;
   else
        return false;
}

void unicopy(node* top, node* &top2)
{
    while(top)
    {
        if(!is_Member(top2,top->data))
        PushData(top2,top->data);
    top = top->next;
    }
   nomeration(top2);
}
void ex3(node* &top)
{
    node* top2 = NULL;
    int actnum;
    cout << "������� 3. ��� ������ ���������� ������� � ��� �����"<< endl;
    cout << "1. ����� (���������� ����� ������)" << endl;
    cout << "2. � �������� ��������� ���� ����"<< endl;
    cout << "3. � ���������� ���������� ���� ����"<< endl;
    cout << "�������� ����� ��������: ";
    cin >> actnum;
    switch(actnum)
    {
        case 1:
            {
                node* p = LastUzel(top);
                cout << "������ �������� " << p->uzel << "�����" << endl;
                break;
            }
        case 2:
            {
            int temp;
            cout << "������� ����� ������� ���� ����" << endl;
            cin >> temp;
            cout << "���������� ����� � ������ � ������ ����: " << ColUz(top,temp) << endl;
            break;
            }
        case 3:
            {
                unicopy(top,top2);
                node* p = LastUzel(top2);
                cout << "������ �������� " << p->uzel <<  " �� ������������� ����� "<< endl;
                break;

            }
        default :
            ex3(top);
    }

}
