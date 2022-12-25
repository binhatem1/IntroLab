#include<iostream>
using namespace std;

void main()
{
	int rank;
	float reading = 0;
	cin >> rank >> reading;

	cout << "Price: ";
	switch (rank)
	{
	case 1:
		cout << ((reading / 100 < 10) ? 10 : reading / 100);
		break;
	case 2:
		cout << ((reading / 50 > 400) ? 400 : reading / 50);
		break;
	case 3:
		cout << reading / 40;
		break;
	}

}
