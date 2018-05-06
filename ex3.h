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
    cout << "Задание 3. Дан список установить сколько в нем узлов"<< endl;
    cout << "1. всего (нахождения длины списка)" << endl;
    cout << "2. с заданным значением поля ИНФО"<< endl;
    cout << "3. с различными значениями поля ИНФО"<< endl;
    cout << "Выберите номер действия: ";
    cin >> actnum;
    switch(actnum)
    {
        case 1:
            {
                node* p = LastUzel(top);
                cout << "список содержит " << p->uzel << "Узлов" << endl;
                break;
            }
        case 2:
            {
            int temp;
            cout << "Подсчет узлов введите поля Инфо" << endl;
            cin >> temp;
            cout << "Количество узлов в списке с полями Инфо: " << ColUz(top,temp) << endl;
            break;
            }
        case 3:
            {
                unicopy(top,top2);
                node* p = LastUzel(top2);
                cout << "список содержит " << p->uzel <<  " не повторяющихся узлов "<< endl;
                break;

            }
        default :
            ex3(top);
    }

}
