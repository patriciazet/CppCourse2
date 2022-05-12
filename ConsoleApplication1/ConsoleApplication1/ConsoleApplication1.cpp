int main()
{
	int a = 1;
	int b = 2;
	int c = 3;

	if ((a > b) && (a > c))
	{
		std::cout << "najwieksza jest " << a << std::endl;

	}
	else if ((b > a) && (b > c))
	{
		std::cout << "najwieksza jest " << b << std::endl;

	}
	else if ((c > a) && (c > b))
	{
		std::cout << "najwieksza jest " << c << std::endl;

	}
	else
	{
		std::cout << "nie ma najwiekszej liczby";

	}

}