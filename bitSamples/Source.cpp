#include <iostream>

void weaponsDisplay(unsigned short);

using namespace std;

int main()
{
	unsigned short val = 0;


	weaponsDisplay(val);

	//adding pistol 0000 0001
	val = val | 0x01;

	//adding chaingun 0000 0101
	val = val | 0x04;

	//adding rocket launcher 0010 0000
	val = val | 0x20;

	weaponsDisplay(val);

	//removing rocket launcher 0010 0000
	val = val & 0xDF;

	weaponsDisplay(val);

	//removing pistol  0000 0001
	val = val & 0xFE;

	weaponsDisplay(val);

	getchar();
	return 0;
}

void weaponsDisplay(unsigned short val)
{
	if (val == 0)
	{
		cout << "You own 0 weapons." << endl;
	}

	else
	{
		cout << "You have: " << endl;

		if (val & 0x01)
		{
			cout << "-Pistol" << endl;
		}

		if ((val & 0x02) >> 1)
		{
			cout << "-Shotgun" << endl;
		}

		if ((val & 0x04) >> 2)
		{
			cout << "-Chaingun" << endl;
		}

		if ((val & 0x08) >> 3)
		{
			cout << "-Sniper Rifle" << endl;
		}

		if ((val & 0x10) >> 4)
		{
			cout << "-Grenade Launcher" << endl;
		}

		if ((val & 0x20) >> 5)
		{
			cout << "-Rocket Launcher" << endl;
		}

		if ((val & 0x40) >> 6)
		{
			cout << "-Plasma Gun" << endl;
		}

		if ((val & 0x10) >> 7)
		{
			cout << "-BFG" << endl;
		}
	}
}