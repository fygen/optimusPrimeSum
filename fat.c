int	atoi(char *c)
{
	int	sign;
	int	res;

	sign = 1;
	if (*c == '-')
	{
		sign = -1;
		c++;
	}
	res = 0;
	while (*c)
	{
		res = (res * 10) + (*c - '0');
		c++;
	}
	return (res * sign);
}


int is_prime2(nbr)
{
	int i;
	i = 2;
	while( i < nbr )
	{

	}

}

#include <stdio.h>
/// @brief check if number is prime !!one by one!!
/// @param nbr
/// @return if prime then its 1
int	is_prime(int nbr)
{
	int	i;

	i = nbr / 2 + 1;
	if (nbr <= 1)
		return (0);                      // 1 ve 0 prime değil
	while ((i > 1) && ((nbr % --i) > 0)) // 7 % 6 > 1 // nbr'ın i'ye modu 0 dan büyükse o zaman devam etmeli.
	{
		if (nbr % i == 0) // eğer nbr'ın i ye modu kalansızsa o zaman bölünebilir.
			break;
	}
	if (i == 1) // asal sayının iterasyonu 1 e kadar azaldıysa o zaman kesin asal sayıdır.
	{
		// dprintf(2, )
		return 1;
	}
	return (0); // eğer i 1 e kadar düşmediyse o zaman asal değildir.
}

int	add_prime_sum(int nbr)
{
	int	sum;

	sum = 0;
	while (nbr){
		if (is_prime(nbr))
			sum += nbr;
		nbr--;
	}
	return (sum);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 1 || !av[1])
		return (-1);
	printf("%i", add_prime_sum(atoi(av[1])));
}
