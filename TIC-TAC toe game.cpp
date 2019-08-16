#include <iostream>

using namespace std;

////////////////////////////////////

    char F[9] = {'-', '-', '-',
                 '-', '-', '-',
                 '-', '-', '-'};
////////////////////////////////////
    void cleanboard()
    {
        for (int i = 0; i < 50; i++)
        {
            cout<<endl;
        }
    }
/////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    void Map()
    {
        cout<<"      КАРТА"<<endl;
        cout<<"  -------------"<<endl;
        cout<<"  |-1-|-2-|-3-|"<<endl;
        cout<<"  -------------"<<endl;
        cout<<"  |-4-|-5-|-6-|"<<endl;
        cout<<"  -------------"<<endl;
        cout<<"  |-7-|-8-|-9-|"<<endl;
        cout<<"  -------------"<<endl;
    }

    void map01()
    {
        cout<<"\n"<<endl;
        cout<<"  -------------"<<endl;
        cout<<"  |-"<<F[0]<<"-|-"<<F[1]<<"-|-"<<F[2]<<"-|"<<endl;
        cout<<"  -------------"<<endl;
        cout<<"  |-"<<F[3]<<"-|-"<<F[4]<<"-|-"<<F[5]<<"-|"<<endl;
        cout<<"  -------------"<<endl;
        cout<<"  |-"<<F[6]<<"-|-"<<F[7]<<"-|-"<<F[8]<<"-|"<<endl;
        cout<<"  -------------"<<endl;
    }
//////////////////////////////////////////////////////////////////////////

int main()
{
	setlocale(LC_ALL, "");

	string name1;
	string name2;

	cout<<"    КРЕСТИКИ НОЛИКИ"<<endl;
	cout<<"\n  Игрок 1"<<endl;
	cout<<"  Введите ник: ";
	 cin>>name1;
    cout<<"\n  Игрок 2"<<endl;
	cout<<"  Введите ник: ";
	 cin>>name2;

	for (int i = 0; i < 9; i++)
    {
        cleanboard();
        if (i % 2 == 0)
        {
            int one;
            Map();
            map01();
            cout<<"  Игрок "<<name1<<endl;
            cout<<"  Ходите: ";
             cin>>one;
             while (one > 9 || one < 1 || F[one - 1] != '-')
             {
                 cleanboard();
                 Map();
                 map01();
                 cout<<"  ERROR!"<<endl;
                 cout<<"  Игрок "<<name1<<endl;
                 cout<<"  Введите снова:"<<endl;
                 cout<<"  Ввод: ";
                  cin>>one;
             }
             F[one - 1] = 'X';

             if (F[0] == 'X' && F[1] == 'X' && F[2] == 'X' ||
                 F[3] == 'X' && F[4] == 'X' && F[5] == 'X' ||
                 F[6] == 'X' && F[7] == 'X' && F[8] == 'X' ||

                 F[0] == 'X' && F[3] == 'X' && F[6] == 'X' ||
                 F[1] == 'X' && F[4] == 'X' && F[7] == 'X' ||
                 F[2] == 'X' && F[5] == 'X' && F[8] == 'X' ||

                 F[0] == 'X' && F[4] == 'X' && F[8] == 'X' ||
                 F[2] == 'X' && F[4] == 'X' && F[6] == 'X')
             {
                 cleanboard();
                 map01();
                 cout<<"  Игрок "<<name1<<endl;
                 cout<<"  ПОБЕДИЛ!!!"<<endl;
                  return 0;
             }
        }
////////////////////////////////////////////////////////////////////////////
        else
        {
            int two;
            Map();
            map01();
            cout<<"  Игрок "<<name2<<endl;
            cout<<"  Ходите: ";
             cin>>two;
             while (two > 9 || two < 1 || F[two - 1] != '-')
             {
                 cleanboard();
                 Map();
                 map01();
                 cout<<"  ERROR!"<<endl;
                 cout<<"  Игрок "<<name2<<endl;
                 cout<<"  Введите снова:"<<endl;
                 cout<<"  Ввод: ";
                  cin>>two;
             }
             F[two - 1] = 'O';
             if (F[0] == 'O' && F[1] == 'O' && F[2] == 'O' ||
                 F[3] == 'O' && F[4] == 'O' && F[5] == 'O' ||
                 F[6] == 'O' && F[7] == 'O' && F[8] == 'O' ||

                 F[0] == 'O' && F[3] == 'O' && F[6] == 'O' ||
                 F[1] == 'O' && F[4] == 'O' && F[7] == 'O' ||
                 F[2] == 'O' && F[5] == 'O' && F[8] == 'O' ||

                 F[0] == 'O' && F[4] == 'O' && F[8] == 'O' ||
                 F[2] == 'O' && F[4] == 'O' && F[6] == 'O')
             {
                 cleanboard();
                 map01();
                 cout<<"  Игрок "<<name2<<endl;
                 cout<<"  ПОБЕДИЛ!!!"<<endl;
                  return 0;
             }
        }
    }
    cleanboard();
    map01();

	return 0;
}
