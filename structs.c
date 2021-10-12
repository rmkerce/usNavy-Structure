//Ryan K
//Program 4
//4/03/2015
//Professor ********
# - vi_vi_vi=VI<
#<define CRT_SECURE_NO_WARNINGS 1
#<define SIZE 50
<2
#<include <stdio.h>
#<include <string.h>
#<include <ctype.h>
<2
#<typedef struct
#<{
#	char shipName[SIZE];
#	char className[SIZE];
#	char shipType[SIZE];
#	double developCost;
#	double shipCost;
#       int commissionYear;
#	int shipID;
#<}usNavy;
<
#void Menu(char *choice); //Displays the menu for the user to pick an option and learn how to make a ship ID.
#void HardSix(usNavy list[], int *numentries); //Hard code of all the pre-filled arrays/strings/values.
#void DisplayData(usNavy list[], int *numentries); //Prints the data for the user to see.
#void SaveData(usNavy list[], int *numentries); //Saves the data to a file outside the program. 
#void AddShip(usNavy list[], int *numentries); //Adds a single ship to the program. 
#void DeleteShip(usNavy list[], int *numentries); //Deletes only a single ship in the database.
#void DeleteAll(int *numentries); //Deletes all the database entries in the program. 
#void UpdateShipPrice(usNavy list[], int *numentries); //If the construction price changes, this function will allow the user to modify it.
#void DisplayID(usNavy list[], int *numentries); //Displays only the IDs entered for the ships input into the program. 
#void DisplayAllNames(usNavy list[], int *numentries); //Displays all the names of the ships entered belonging to a particular class.
<2
#<int main()
#<{
#	int numentries = 0;
#	char choice	
#	usNavy list[SIZE] = { "/0" };
<2	
#	HardSix(list, &numentries);
<2
<2	
#<	do{
#		Menu(&choice);
<2
#		if(toupper(choice) == 'A')
#<2		{
#			AddShip(list, &numentries);
#<		}
#		else if(toupper(choice) == 'D')
#<		{
			DeleteShip(list, &numentries);
		}
		else if(toupper(choice) == 'P')
		{
			DisplayData(list, &numentries);
		}
		else if(toupper(choice) == 'S')
		{
			SaveData(list, &numentries);
		}
		else if(toupper(choice) == 'C')
		{
			DeleteAll(&numentries);
		}
		else if(toupper(choice) == 'U')
		{
			UpdateShipPrice(list, &numentries);
		}
		else if(toupper(choice) == 'I')
		{
			DisplayID(list, &numentries);
		}
		else if(toupper(choice) == 'N')
		{
			DisplayAllNames(list, &numentries);
		}
	} while (choice != 'Q');


	return 0;

}

void Menu(char *choice)
{
	printf("--------------------------------------------------------------------------------\n");
	printf("**************************** Welcome to Jane's Defense *************************\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("********************* Archival Ship Database and Encyclopedia ******************\n");
	printf("--------------------------------------------------------------------------------\n");
	
	printf("\nSelect one of the options below:\n\n");
	printf("A - ADD a new ship\n");
	printf("D - DELETE a ship (I mean, if you really need to...)\n");
	printf("P - PRINT entire database to the screen\n");
	printf("S - SAVE the current database to a file\n");
	printf("C - CLEAR the entire database (Why would you want to? Honestly?!)\n");
	printf("U - UPDATE the ship's construction price.\n");
	printf("I - DISPLAY the IDs of all the ships in the database.\n");
	printf("N - DISPLAY all the names of the ships to the screen.\n");
	printf("Q - QUIT the program\n\n");

	printf("--------------------------------------------------------------------------------\n");
	printf("If you need to add a ship ID, follow the given format here:\n");
	printf("\t1. Find the beginning ship of the class' identifier,\n\t\ti.e. the 68 in CVN-68\n");
	printf("\t2. Find the planned ending ship of the class' identifier, \n\t\ti.e. the 77 in CVN-77\n");
	printf("\t3. Find the number of ship it is in the total number commissioned. If it");
	printf("\tis the fourth ship in the class, and add a four to the total number.\n");
	printf("\tA complete ID number looks like this: 68774\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("\nSo, what would you like to do today, Commander? Choose an option: \n\n");

	scanf(" %c", &*choice);
}

void HardSix(usNavy list[], int *numentries)
{
	strcpy(list[0].shipName, "USS Arleigh Burke DDG-51");
	strcpy(list[0].className, "Arleigh-Burke Class");
	strcpy(list[0].shipType, "Destroyer");
	list[0].developCost = 93.98;
	list[0].shipCost = 1.843;
	list[0].commissionYear = 1989;
	list[0].shipID = 511201;
	*numentries += 1;

	strcpy(list[1].shipName, "USS Virginia SSN-774");
	strcpy(list[1].className, "Virginia Class");
	strcpy(list[1].shipType, "Nuclear Submarine");
	list[1].developCost = 92.55;
	list[1].shipCost = 2.644;
	list[1].commissionYear = 2004;
	list[1].shipID = 7748141;
	*numentries += 1;

	strcpy(list[2].shipName, "USS Independence LCS-2");
	strcpy(list[2].className, "Independence Class");
	strcpy(list[2].shipType, "Littoral Combat Ship");
	list[2].developCost = 29.67;
	list[2].shipCost = 0.360;
	list[2].commissionYear = 2010;
	list[2].shipID = 2241;
	*numentries += 1;

	strcpy(list[3].shipName, "USS Nimitz CVN-68");
	strcpy(list[3].className, "Nimitz Class");
	strcpy(list[3].shipType, "Nuclear Aircraft Carrier");
	list[3].developCost = 150.45;
	list[3].shipCost = 4.5;
	list[3].commissionYear = 1975;
	list[3].shipID = 68771;
	*numentries += 1;

	strcpy(list[4].shipName, "USS Bunker Hill CG-52");
	strcpy(list[4].className, "Ticonderoga Class");
	strcpy(list[4].shipType, "Guided Missile Cruiser");
	list[4].developCost = 98.46;
	list[4].shipCost = 1.55;
	list[4].commissionYear = 1983;
	list[4].shipID = 47731;
	*numentries += 1;

	strcpy(list[5].shipName, "USS America LHA-8");
	strcpy(list[5].className, "America Class");
	strcpy(list[5].shipType, "Amphibious Assault Ship, Gen Purpose");
	list[5].developCost = 11.23;
	list[5].shipCost = 3.4;
	list[5].commissionYear = 2014;
	list[5].shipID = 6171;
	*numentries += 1;
}

void DisplayData(usNavy list[], int *numentries)
{
	int i;
	
	for (i = 0; i < *numentries; i++)
	{
			printf("~~~ Database Entry %d ~~~\n", i+1);
			printf("Ship Name: %s\n", list[i].shipName);
			printf("Class Name: %s\n", list[i].className);
			printf("Type of Ship: %s\n", list[i].shipType);
			printf("Cost to Develop: %.2f billion dollars\n", list[i].developCost);
			printf("Cost per Vessel: %.2f billion dollars\n", list[i].shipCost);
			printf("Year Commissioned: %d\n", list[i].commissionYear);
			printf("Ship ID: %d\n\n\n", list[i].shipID);
	}
	
}

void SaveData(usNavy list[], int *numentries)
{
	int i;
	FILE *outfile;
	outfile = fopen("out.txt", "w");
	if (*numentries == 0)
	{
		printf("The file is empty, Commander.\n");
	}
	else
	{
		for(i = 0; i < *numentries; i++)
		{
			fprintf(outfile, "~~~ Database Entry %d ~~~\n", i+1);
			fprintf(outfile, "Ship Name: %s\n", list[i].shipName);
			fprintf(outfile, "Class Name: %s\n", list[i].className);
			fprintf(outfile, "Type of Ship: %s\n", list[i].shipType);
			fprintf(outfile, "Cost to Develop: %.2f billion dollars\n", list[i].developCost);
			fprintf(outfile, "Cost per Vessel: %.2f billion dollars\n", list[i].shipCost);
			fprintf(outfile, "Year Commissioned: %d\n", list[i].commissionYear);
			fprintf(outfile, "Ship ID: %d\n\n\n", list[i].shipID);
		}
	}
	fclose(outfile);
	printf("A report has been saved to the designated file. Awaiting further orders.\n");
}

void AddShip(usNavy list[], int *numentries)
{
	printf("Enter the name of the ship:\n");
	scanf("%s\n\n", &list[*numentries].shipName);
	printf("Enter the class of ship it is a part of:\n\n");
	scanf("%s\n\n", &list[*numentries].className);
	printf("Enter the type of ship this entry is, i.e. frigate, cruiser, etc:\n");
	scanf("%s\n\n", &list[*numentries].shipType);
	printf("Enter the development cost of the ship (in billions):\n");
	scanf(" %lf", &list[*numentries].developCost);
	printf("Enter the cost of the vessel (in billions):\n");
	scanf(" %lf", &list[*numentries].shipCost);
	printf("Enter the year this ship was commissioned:\n");
	scanf(" %d", &list[*numentries].commissionYear);
	printf("Enter the ship's new ID. For formatting, check the menu:\n"); 
	scanf(" %d", &list[*numentries].shipID);
	*numentries += 1;
}

void DeleteShip(usNavy list[], int *numentries)
{
	int toFind, i;
	printf("What ship would you like to delete from the database, Commander?\n");
	scanf(" %d", &toFind);
	for(i = 0; i < *numentries; i++)
	{
		if(toFind == list[i].shipID)
		{
			list[i] = list[*numentries - 1]; 
			*numentries -= 1;
		}
		else
		{
			printf("The ship has not been found. Please use a proper ID, Commander");
		}
	}
}

void DeleteAll(int *numentries)
{
	*numentries = 0;
}

void DisplayID(usNavy list[], int *numentries)
{
	int i;

	printf("Here are the IDs of the ships in the database, displayed vertically:\n");
	for (i = 0; i < *numentries; i++)
	{
		printf(" %d\n", list[i].shipID);
	}
}

void UpdateShipPrice(usNavy list[], int *numentries)
{
	int toFind, i;
	printf("What ship's construction cost would you like to update, Commander? Please use a proper ID:\n");
	scanf(" %d", &toFind);
	for (i = 0; i < *numentries; i++)
	{
		if (toFind == list[i].shipID)
		{
			printf("Enter a new price, in billions:\n");
			scanf(" %d", list[i].shipCost);
		}
		else
		{
			printf("The ship has not been found. Please use a proper ID, Commander");
		}
	}
}

void DisplayAllNames(usNavy list[], int *numentries)
{
	int i;
	printf("Here are all the names of the ships in the database:\n\n");
	for (i = 0; i < *numentries; i++)
	{
		printf("%s\n", list[i].shipName);
	}
}
