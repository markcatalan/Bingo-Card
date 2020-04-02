#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
	int table[5][5];
	int z = 1;
	int increm = 0;
	char changer;
	
	do{
	
	cout << setw(3) << "B" << setw(4) << "I" << setw(4) << "N" << setw(4) << "G" << setw(4) << "O" << endl;
	
	srand(time(0));
	
		for(int x = 0; x < 5; x++)
		{
			for(int y = 0; y < 5; y++)
			{
				table[x][y] = rand() % 14 + z;
				
					for(int count = 0; count < x; count++){
					
						if(table[x][y] == table[count][increm]){
							table[x][y] += 1;
							count = 0;
						}	 	 	 	 	 
					}
							if(x == 2 && y == 2)
								cout << setw(4) << " ";
							else
								cout << setw(3) << table[x][y] << " ";
							increm++;
							z += 15;
			}
				increm = 0;
				z = 1;
				cout << endl;
		}
			cout << endl << "Press 0 to change card" << endl;
			cin >> changer;
		}
		while(changer == 0);
	return 0;
}


