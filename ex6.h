using namespace std;
int changedata(int data)
{
    return (data-(data/2));
}
void changeListRec(node* &top)
{
    node* p = top;
    if(p)
    {
      p->data = changedata(p->data);
      changeListRec(p->next);
    }
}
void changeList(node* &top)
{
    node* p = top;
    while (p)
    {
        p->data = changedata(p->data);
        p = p->next;
    }
}
void ex6(node* top)
{
    int temp;
    cout << "������� 6. ��������� ����� � ������" << endl;
    cout << "�������� ������ 1 - ����������, 0 - �� ����������: ";
    cin >> temp;
    if(temp==1)
        changeListRec(top);
    else
        changeList(top);
        cout << "���������� ������" << endl;
        ShowList(top);
}
