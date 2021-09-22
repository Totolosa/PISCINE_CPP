#include <fstream>
#include <iostream>

void	quit_prog(std::string str)
{
	std::cout << str << std::endl;
	exit(0);
}

int main(int argc, char *argv[])
{
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::string		buffer;
	std::string		copy;
	std::string		result;
	size_t			i_start = 0;
	size_t			i_end = 0;

	if (argc != 4)
		quit_prog("Only 3 arguments are possible : filename string1 string2");
	std::ifstream	ifs(filename = argv[1]);
	if (!ifs)
		quit_prog("The file does not exist");
	if ((s1 = argv[2]).empty() || (s2 = argv[3]).empty())
		quit_prog("Strings should not be empty");

	while (getline(ifs, buffer))
		copy += (buffer + '\n');
	while ((i_end = copy.find(s1, i_start)) != std::string::npos)
	{
		result.append(copy, i_start, i_end - i_start);
		result.append(s2);
		i_start = i_end + s1.size();
	}
		
	std::ofstream	ofs_replace(filename + ".replace");
	ofs_replace << result;
	ofs_replace.close();
	ifs.close();
	return (0);
}