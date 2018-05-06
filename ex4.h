using namespace std;
void ex4()
{
    ifstream fin1("data1.txt");
    ifstream fin2("data2.txt");
    cout << "Конкотенация списков" << endl;
    cout << "Создание списков" << endl;
    node* top1;
    node* top2;
    CreateList(fin1,top1);
    cout << "Список 1:" << endl;
    ShowList(top1);
    CreateList(fin2,top2);
    cout << "Список 2:" << endl;
    ShowList(top2);
    concot(top1,top2);
    ShowList(top1);
    fin1.close();
    fin2.close();
}
