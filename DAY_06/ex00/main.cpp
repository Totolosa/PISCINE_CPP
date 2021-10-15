#include <iostream>
#include <string>

#define TYPE_CHAR	0
#define TYPE_INT	1
#define TYPE_FLOAT	2
#define TYPE_DOUBLE	3
#define WRONG_INPUT	4
#define NOT_FOUND	5

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

    for (int i = 0; str[i]; i++) {
        if ((!isdigit(str[i]) && str[i] != '.') || count > 1)
			return WRONG_INPUT;
		if (str[i] == '.')
			count++;
		if (i == str.length() - 1 && !isdigit(str[i]) && str[i] != 'f')
			return WRONG_INPUT;
    }
	if (count == 0)
		return TYPE_INT;
	if (str[str.length() - 1] == 'f')
		return TYPE_FLOAT;
	return TYPE_DOUBLE;
}

int reconize_type(char *s) {
	int ret_char;

	if ((ret_char = check_char(s)) != NOT_FOUND)
		return ret_char;
	return check_dec(s);
}

void print_char(char *str) {
	char character = str[1];

	
}

int main(int ac, char **av) 
{
	int			i_val;
	float		f_val;
	double		d_val;
	char		c_val;
	int			type;
	
	if (ac != 2)
		error("Wrong args number : need 2");
	type = reconize_type(av[1]);
	switch (type) {
		case WRONG_INPUT:
			std::cout << "Wrong input" << std::endl;
			exit(1);
		case TYPE_CHAR:
			print_char(av[1]);
			break;
		case TYPE_INT:
			print_int(av[1]);
			break;
		case TYPE_FLOAT:
			print_float(av[1]);
			break;
		case TYPE_DOUBLE:
			print_double(av[1]);
	}
	return 0;
}
