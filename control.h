struct node{
int data;
int uzel;
node* next;
};
struct node_nine{
char data[10];
node_nine* next;
};
#include "common_function.h"
#include "ex1.h"
#include "ex2.h"
#include "ex3.h"
#include "ex4.h"
#include "ex5.h"
#include "ex6.h"
#include "ex7.h"
#include "ex8.h"
#include "ex9.h"
#include "ex10.h"
#include "ex11.h"
#include "ex12.h"
using namespace std;
void control()
{

    ifstream fin("data1.txt");
    ifstream fin2("data2.txt");
    node* top;
    node* top2;
    CreateList(fin,top);
    CreateList(fin2,top2);
    int choise;
    cout << "Выберите номер задачи: ";
    cin >> choise;
    switch(choise)
    {
    case 1:
        {
            ex1();
            cout << "Хороший программист, ленивый программист" << endl;
            control();
            break;
        }
    case 2:
        {
            ex2(top);
            cout << "Хороший программист, ленивый программист" << endl;
            control();
            break;
        }
    case 3:
        {
            ex3(top);
            cout << "Хороший программист, ленивый программист" << endl;
            control();
            break;
        }
    case 4:
        {
            ex4();
            cout << "Хороший программист, ленивый программист" << endl;
            control();
            break;
        }
    case 5:
        {
            ex5(top);
            cout << "Хороший программист, ленивый программист" << endl;
            control();
            break;
        }
    case 6:
        {
            ex6(top);
            cout << "Хороший программист, ленивый программист" << endl;
            control();
            break;
        }
    case 7:
        {
            ex7(top);
            cout << "Хороший программист, ленивый программист" << endl;
            control();
            break;
        }
    case 8:
        {
            ex8(top);
            control();
            break;
        }
    case 9:
        {
            ex9(top);
            cout << "Хороший программист, ленивый программист" << endl;
            control();
            break;
        }
    case 10:
        {
            ex10(top);
            cout << "Хороший программист, ленивый программист" << endl;
            control();
            break;
        }
    case 11:
        {
        cout << "Задание 11. даны два списка является ли список 2 подсписком списка 1" << endl;
            if(ex11(top,top2))
                cout << "Да" << endl;
            else
                cout << "Нет" << endl;
                cout << "Хороший программист, ленивый программист" << endl;

            control();
            break;

        }
    case 12:
        {
            ex12(top,top2);
            control();
            break;
        }
    default:
        {
            control();
        }
    }
    fin.close();
    fin2.close();
}
