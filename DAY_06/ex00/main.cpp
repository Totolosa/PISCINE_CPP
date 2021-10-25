#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

#define TYPE_CHAR	0
#define TYPE_INT	1
#define TYPE_FLOAT	2
#define TYPE_DOUBLE	3
#define TYPE_NAN	4
#define WRONG_INPUT	5
#define NOT_FOUND	6

typedef struct s_conv {
	int			i_val;
	float		f_val;
	double		d_val;
	char		c_val;
	int			type;
} t_conv;

void error(std::string str) {
	std::cout << str << std::endl;
	exit(1);
}

int check_char(char *s) {
	std::string str(s);
	
	if (str[0] == '\'') {
		if (str[2] == '\'') {
			if (str.length() == 3)
				return TYPE_CHAR;
			return WRONG_INPUT;
		}
		return WRONG_INPUT;
	}
	return NOT_FOUND;
}

int check_dec(char *s) {
	std::string	str(s);
	int			count = 0;

	if (!isdigit(str[0]) && str[0] != '-')
		return WRONG_INPUT;
	for (size_t i = 1; str[i]; i++) {
		if ((!isdigit(str[i]) && str[i] != '.' && i < str.length() - 1) || count > 1) {
			std::cout << "test1" << std::endl;
			return WRONG_INPUT;
		}
		if (str[i] == '.')
			count++;
		if (i == str.length() - 1 && ((!isdigit(str[i]) && str[i] != 'f') || (str[i] == 'f' && (count == 0 || str[i - 1] == '.'))))
			return WRONG_INPUT;
	}
	if (count == 0) 
		return TYPE_INT;
	if (str[str.length() - 1] == 'f')
		return TYPE_FLOAT;
	return TYPE_DOUBLE;
}

int reconize_type(char *s) {
	std::string str(s);
	int ret_char;

	if (str == "-inff" || str == "+inff" || str == "nanf"
			|| str == "-inf" || str == "+inf" || str == "nan")
		return TYPE_NAN;
	if ((ret_char = check_char(s)) != NOT_FOUND)
		return ret_char;
	return check_dec(s);
}

int set_precision(char *s) {
	int count = 0;
	int i;

	for (i = 0; s[i] != '.'; i++)
		count++;
	while (s[++i] && isdigit(s[i]))
		count++;
	// std::cout << "precision = " << count << std::endl;
	return count;
}

void print_char(char c) {
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void print_int(double value) {
	if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min()) {
		std::cout << "error : INT out of range" << std::endl;
		exit(1);
	}
	int integer =  static_cast<int>(value);

	if (integer < 32 || integer > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(integer) << "'" << std::endl;
	std::cout << "int: " << integer << std::endl;
	if (integer < 1000000)
	{
		std::cout << "float: "<< static_cast<float>(integer) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(integer) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: "<< static_cast<float>(integer) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(integer) << std::endl;
	}
}

void print_float(double value, int prec) {
	float floating =  static_cast<float>(value);
	if (floating < 32 || floating > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(floating) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(floating) << std::endl;
	std::cout << "float: "<< std::setprecision(prec) << floating << "f" << std::endl;
	std::cout << "double: " << std::setprecision(prec) << value << std::endl;
}

void print_double(double value, int prec) {

	if (value < 32 || value > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "float: "<< std::setprecision(prec) << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(prec) << value << std::endl;
}

void	print_nan(std::string nan)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (nan == "nanf" || nan == "nan")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (nan == "+inff" || nan == "+inf")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (nan == "-inff" || nan == "-inf")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

int main(int ac, char **av) 
{
	int type;
	int precision;
	
	if (ac != 2)
		error("Wrong args number : need 2");
	type = reconize_type(av[1]);
	if (type == TYPE_FLOAT || type == TYPE_DOUBLE)
		precision = set_precision(av[1]);
	// std::cout << "type = " << type << std::endl;
	switch (type) {
		case WRONG_INPUT:
			std::cout << "Wrong input" << std::endl;
			exit(1);
		case TYPE_CHAR:
			print_char(av[1][1]);
			break;
		case TYPE_INT:
			print_int(atof(av[1]));
			break;
		case TYPE_FLOAT:
			print_float(atof(av[1]), precision);
			break;
		case TYPE_DOUBLE:
			print_double(atof(av[1]), precision);
			break;
		case TYPE_NAN:
			print_nan(av[1]);
	}
	return 0;
}
