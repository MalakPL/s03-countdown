#include <iostream>
#include <string>

using std::logic_error;
using std::cout;
using std::cin;
using std::cerr;
using std::stoi;
using std::endl;

auto main(int argc, const char* argv[]) -> int
{
	try
	{
		if (argc != 2)
		{
			throw logic_error{ "Podana ilosc argumentow jest nieprawidlowa." };
		}

		int N = stoi(argv[1]);

		for (int i = N; i != 0; )
		{
			cout << i << "..." << endl;

			if (N > 0)
			{
				i--;
			}
			else 
			{
				i++;
			}
		}

		cout << "0..." << endl;

		return 0;
	}
	catch (logic_error ex)
	{
		cerr << ex.what() << endl;
		return 1;
	}
}