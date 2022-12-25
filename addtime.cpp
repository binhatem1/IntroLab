#include<iostream>
using namespace std;

void main()
{
	int h1, m1, s1, h2, m2, s2;

	cout << "First Time:\n";
	cout << "Hours: "; cin >> h1;
	cout << "Minutes: "; cin >> m1;
	cout << "Seconds: "; cin >> s1;

	cout << "\nSecond Time:\n";
	cout << "Hours: "; cin >> h2;
	cout << "Minutes: "; cin >> m2;
	cout << "Seconds: "; cin >> s2;

	int hours = h1 + h2 + (m1 + m2) / 60 + (s1 + s2) / 3600,
		minutes = ((m1 + m2) + (s1 + s2) / 60) % 60,
		seconds = (s1 + s2) % 60;

	cout << "\nTotal Time:\n";
	cout << "Hours: " << hours;
	cout << "\nMinutes: " << minutes;
	cout << "\nSeconds: " << seconds;


}
