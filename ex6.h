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
    cout << "Задание 6. Изменение чисел в списке" << endl;
    cout << "Выберите способ 1 - рекурсивно, 0 - не некурсивно: ";
    cin >> temp;
    if(temp==1)
        changeListRec(top);
    else
        changeList(top);
        cout << "Измененный список" << endl;
        ShowList(top);
}
