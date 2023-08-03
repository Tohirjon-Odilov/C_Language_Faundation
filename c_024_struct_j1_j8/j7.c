#include <stdio.h>

typedef struct aerport
{
	char type[32];
	char date[32];
	char flying_city[32];
	char landing_city[32];
	char fligth_time[32];

} AERPORT;

void filter_aerport()
{
	AERPORT number_of_aerport[10] = {
		{"Antonov An-140", "02.01.2023", "Singapur", "Moskva", "05:15"},
		{"Airbus A319neo", "10.03.2023", "Latviya", "Moskva", "08:15"},
		{"Antonov An-225 Mriya", "11.08.2023", "San-Fransico", "Berlin", "15:15"},
		{"COMAC ARj21", "12.05.2023", "Dubai", "Toshkent", "05:30"},
		{"Airbus A380-800", "07.06.2023", "Saudia", "Berlin", "09:15"},
		{"Hawker Siddeley HS 748", "01.03.2023", "Andijon", "Toshkent", "09:55"},
		{"Bell 412", "22.12.2023", "Moskva", "Singapur", "05:55"},
		{"Boeing 727-200", "31.07.2023", "London", "Parij", "02:05"},
		{"COMAC C919", "29.08.2023", "Iraq", "Tailand", "06:20"},
		{"Douglas DC-3", "20.09.2023", "Tojikiston", "Amsterdam", "12:00"}};

	for (int i = 0; i < 10; i++)
	{
		int month = number_of_aerport[i].date[4] - '0';
		if (6 <= month && month <= 8)
		{
			printf("Type of Aircraft: %s\n", number_of_aerport[i].type);
			printf("Date of Aircraft: %s\n", number_of_aerport[i].date);
			printf("Flying of Aircraft: %s\n", number_of_aerport[i].flying_city);
			printf("Landing of Aircraft: %s\n", number_of_aerport[i].landing_city);
			printf("Time of Aircraft: %s\n", number_of_aerport[i].fligth_time);
			puts("");
		}
	}
}

int main()
{

	filter_aerport();

	return 0;
}
