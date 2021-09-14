#include <iostream>
#include <string>
#include <locale>

int main(int argc, char **argv)
{
	std::string	str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					std::cout << static_cast<char>((argv[i][j] - 32));
				else
					std::cout << static_cast<char>(argv[i][j]);
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
