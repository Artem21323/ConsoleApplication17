#include <iostream>

using namespace std;

class Map
{
public:
	int arr[10][10] = { 0 }; //создание игрового поля 10х10
	void show_map() //вывод поля в консоль
	{
		cout << "    ";
		for (int i = 1; i < 10; i++)
		{
			cout.width(2);
			cout << i;
		}
		cout << " 10" << endl;
		for (int i = 0; i < 10; i++)
		{
			cout.width(2);
			cout << i + 1 << " |";
			for (int j = 0; j < 10; j++)
			{
				cout.width(2);
				cout << arr[i][j];
			}
			cout << endl;
		}
	}
	bool setShip1(int x, int y) //создание однопалубного корабля
	{
		if (arr[x - 1][y - 1] == 0)
		{
			arr[x - 1][y - 1] = 1;
		}
		else
		{
			return 0;
		}
	}
	bool setShip2(int x, int y, int d) //создание двухпалубного корабля
	{
		if (arr[x - 1][y - 1] == 0)
		{
			if (d == 1)
			{
				if (arr[x - 2][y - 1] == 0)
				{
					arr[x - 1][y - 1] = 1;
					arr[x - 2][y - 1] = 1;
				}
			}
			else if (d == 2)
			{
				if (arr[x][y - 1] == 0)
				{
					arr[x - 1][y - 1] = 1;
					arr[x][y - 1] = 1;
				}
			}
			else if (d == 3)
			{
				if (arr[x - 1][y - 2] == 0)
				{
					arr[x - 1][y - 1] = 1;
					arr[x - 1][y - 2] = 1;
				}
			}
			else if (d == 4)
			{
				if (arr[x - 1][y] == 0)
				{
					arr[x - 1][y - 1] = 1;
					arr[x - 1][y] = 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	bool setShip3(int x, int y, int d) //создание трехпалубного корабля
	{
		if (arr[x - 1][y - 1] == 0)
		{
			if (d == 1)
			{
				if ((arr[x - 2][y - 1] == 0) && (arr[x - 3][y - 1] == 0))
				{
					arr[x - 1][y - 1] = 1;
					arr[x - 2][y - 1] = 1;
					arr[x - 3][y - 1] = 1;
				}
			}
			else if (d == 2)
			{
				if ((arr[x][y - 1] == 0) && (arr[x + 1][y - 1] == 0))
				{
					arr[x - 1][y - 1] = 1;
					arr[x][y - 1] = 1;
					arr[x + 1][y - 1] = 1;
				}
			}
			else if (d == 3)
			{
				if ((arr[x - 1][y - 2] == 0) && (arr[x - 1][y - 3] == 0))
				{
					arr[x - 1][y - 1] = 1;
					arr[x - 1][y - 2] = 1;
					arr[x - 1][y - 3] = 1;
				}
			}
			else if (d == 4)
			{
				if ((arr[x - 1][y] == 0) && (arr[x - 1][y + 1] == 0))
				{
					arr[x - 1][y - 1] = 1;
					arr[x - 1][y] = 1;
					arr[x - 1][y + 1] = 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	bool setShip4(int x, int y, int d) //создание четырехпалубного корабля
	{
		if (arr[x - 1][y - 1] == 0)
		{
			if (d == 1)
			{
				if ((arr[x - 2][y - 1] == 0) && (arr[x - 3][y - 1] == 0) && (arr[x - 4][y - 1] == 0))
				{
					arr[x - 1][y - 1] = 1;
					arr[x - 2][y - 1] = 1;
					arr[x - 3][y - 1] = 1;
					arr[x - 4][y - 1] = 1;
				}
			}
			else if (d == 2)
			{
				if ((arr[x][y - 1] == 0) && (arr[x + 1][y - 1] == 0) && (arr[x + 2][y - 1] == 0))
				{
					arr[x - 1][y - 1] = 1;
					arr[x][y - 1] = 1;
					arr[x + 1][y - 1] = 1;
					arr[x + 2][y - 1] = 1;
				}
			}
			else if (d == 3)
			{
				if ((arr[x - 1][y - 2] == 0) && (arr[x - 1][y - 3] == 0) && (arr[x - 1][y - 4] == 0))
				{
					arr[x - 1][y - 1] = 1;
					arr[x - 1][y - 2] = 1;
					arr[x - 1][y - 3] = 1;
					arr[x - 1][y - 4] = 1;
				}
			}
			else if (d == 4)
			{
				if ((arr[x - 1][y] == 0) && (arr[x - 1][y + 1] == 0) && (arr[x - 1][y + 2] == 0))
				{
					arr[x - 1][y - 1] = 1;
					arr[x - 1][y] = 1;
					arr[x - 1][y + 1] = 1;
					arr[x - 1][y + 2] = 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	bool shot_Ship(int x, int y) //выстрел поле 1
	{
		if (arr[x - 1][y - 1] == 1)
		{
			arr[x - 1][y - 1] = 2;
		}
		else if (arr[x - 1][y - 1] == 0)
		{
			arr[x - 1][y - 1] = 3;
			return 0;
		}
	}
	void p_shot(int x, int y, int p) //выстрел поле 2
	{
		if (p == 1)
		{
			arr[x - 1][y - 1] = 2;
		}
		else if (p==0)
		{
			arr[x - 1][y - 1] = 3;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");
	Map arr1, arr2, arr11, arr22; // создание игровых полей
	int x, y, d;
	for (int i = 0; i < 4; i++) //постановка однопалубных кораблей 1 игрока
	{
		system("cls");
		arr1.show_map();
		cout << "Постановка однопалубного корабля 1 игрока" << endl;
		cout << "Введите координату x: ";
		cin >> x;
		cout << "Введите координату y: ";
		cin >> y;
		if (arr1.setShip1(x, y) != 0)
		{
			arr1.setShip1(x, y);
		}
		else
		{
			i--;
		}
	}
	for (int i = 0; i < 3; i++) //постановка двухлубных кораблей 1 игрока
	{
		system("cls");
		arr1.show_map();
		cout << "Постановка двухпалубного корабля 1 игрока" << endl;
		cout << "Введите координату х: ";
		cin >> x;
		cout << "Введите координату y: ";
		cin >> y;
		cout << "Введите желаемое направление (1-Вверх, 2-Вниз, 3-Влево, 4-Вправо): ";
		cin >> d;
		if (arr1.setShip2(x, y, d) != 0)
		{
			arr1.setShip2(x, y, d);
		}
		else
		{
			i--;
		}
	}
	for (int i = 0; i < 2; i++) //постановка трехпалубных кораблей 1 игрока
	{
		system("cls");
		arr1.show_map();
		cout << "Постановка трехпалубного корабля 1 игрока" << endl;
		cout << "Введите координату х: ";
		cin >> x;
		cout << "Введите координату y: ";
		cin >> y;
		cout << "Введите желаемое направление (1-Вверх, 2-Вниз, 3-Влево, 4-Вправо): ";
		cin >> d;
		if (arr1.setShip3(x, y, d) != 0)
		{
			arr1.setShip3(x, y, d);
		}
		else
		{
			i--;
		}
	}
	for (int i = 0; i < 1; i++) //постановка четырехпалубных кораблей 1 игрока
	{
		system("cls");
		arr1.show_map();
		cout << "Постановка четырехпалубного корабля 1 игрока" << endl;
		cout << "Введите координату х: ";
		cin >> x;
		cout << "Введите координату y: ";
		cin >> y;
		cout << "Введите желаемое направление (1-Вверх, 2-Вниз, 3-Влево, 4-Вправо): ";
		cin >> d;
		if (arr1.setShip4(x, y, d) != 0)
		{
			arr1.setShip4(x, y, d);
		}
		else
		{
			i--;
		}
	}

	for (int i = 0; i < 4; i++) //постановка однопалубных кораблей 1 игрока
	{
		system("cls");
		arr2.show_map();
		cout << "Постановка однопалубного корабля 2 игрока" << endl;
		cout << "Введите координату x: ";
		cin >> x;
		cout << "Введите координату y: ";
		cin >> y;
		if (arr2.setShip1(x, y) != 0)
		{
			arr2.setShip1(x, y);
		}
		else
		{
			i--;
		}
	}
	for (int i = 0; i < 3; i++) //постановка двухпалубных кораблей 1 игрока
	{
		system("cls");
		arr2.show_map();
		cout << "Постановка двухпалубного корабля 2 игрока" << endl;
		cout << "Введите координату х: ";
		cin >> x;
		cout << "Введите координату y: ";
		cin >> y;
		cout << "Введите желаемое направление (1-Вверх, 2-Вниз, 3-Влево, 4-Вправо): ";
		cin >> d;
		if (arr2.setShip2(x, y, d) != 0)
		{
			arr2.setShip2(x, y, d);
		}
		else
		{
			i--;
		}
	}
	for (int i = 0; i < 2; i++) //постановка трехпалубных кораблей 1 игрока
	{
		system("cls");
		arr2.show_map();
		cout << "Постановка трехпалубного корабля 2 игрока" << endl;
		cout << "Введите координату х: ";
		cin >> x;
		cout << "Введите координату y: ";
		cin >> y;
		cout << "Введите желаемое направление (1-Вверх, 2-Вниз, 3-Влево, 4-Вправо): ";
		cin >> d;
		if (arr2.setShip3(x, y, d) != 0)
		{
			arr2.setShip3(x, y, d);
		}
		else
		{
			i--;
		}
	}
	for (int i = 0; i < 1; i++) //постановка четырехпалубных кораблей 1 игрока
	{
		system("cls");
		arr2.show_map();
		cout << "Постановка четырехпалубного корабля 2 игрока" << endl;
		cout << "Введите координату х: ";
		cin >> x;
		cout << "Введите координату y: ";
		cin >> y;
		cout << "Введите желаемое направление (1-Вверх, 2-Вниз, 3-Влево, 4-Вправо): ";
		cin >> d;
		if (arr2.setShip4(x, y, d) != 0)
		{
			arr2.setShip4(x, y, d);
		}
		else
		{
			i--;
		}
	}
	int player1 = 1, player2 = 0; // ход игроков
	int k1 = 0, k2 = 0; // количество уничтоженных кораблей
	for (; (k1 < 20) && (k2 < 20);) // цикл работающий пока уничтоженных полей координат не составит 20
	{
		if (player1 == 1) //ход 1 игрока
		{
			system("cls");
			cout << "Первый игрок:" << endl;
			cout << "Поле 1 игрока:" << endl;
			arr1.show_map();
			cout << "Поле 2 игрока:" << endl;
			arr22.show_map();
			cout << "Введите координату x:";
			cin >> x;
			cout << "Введите координату y:";
			cin >> y;
			if (arr2.shot_Ship(x, y) != 0)
			{
				cout << "Попадание";
				arr22.p_shot(x, y, 1);
				arr2.shot_Ship(x, y);
				k2++;
				player1 = 1;
				player2 = 0;
			}
			else
			{
				arr22.p_shot(x, y, 0);
				arr2.shot_Ship(x, y);
				player1 = 0;
				player2 = 1;
			}
		}
		if (player2 == 1) //ход 2 игрока
		{
			system("cls");
			cout << "Второй игрок:" << endl;
			cout << "Поле 2 игрока:" << endl;
			arr2.show_map();
			cout << "Поле 1 игрока:" << endl;
			arr11.show_map();
			cout << "Введите координату x:";
			cin >> x;
			cout << "Введите координату y:";
			cin >> y;
			if ((arr1.shot_Ship(x, y)) != 0)
			{
				cout << "Попадание";
				arr11.p_shot(x, y, 1);
				arr2.shot_Ship(x, y);
				k1++;
				player1 = 0;
				player2 = 1;
			}
			else
			{
				arr11.p_shot(x, y, 0);
				arr2.shot_Ship(x, y);
				player1 = 1;
				player2 = 0;
			}
		}
	}
	system("cls");
	if (k1 == 20) //вывод победителя
	{
		cout << "Победил 2 игрок" << endl;
	}
	else if (k2 == 20)
	{
		cout << "Победил 1 игрок" << endl;
	}
	arr1.show_map();
	cout << endl;
	arr2.show_map();
}
