#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

struct data{
	char farmname[20], Owner[20];
	float money;
	int day;
};

struct animalandvalue{
	int chicken;
	int pig;
	int cow;
	int duck;
	int sheep;
	int fish;
	int shrimp;
	
	float Vchicken;
	float Vpig;
	float Vcow;
	float Vduck;
	float Vsheep;
	float Vfish;
	float Vshrimp;
};

struct animalevel{
	int chicken;
	int pig;
	int cow;
	int duck;
	int sheep;
	int fish;
	int shrimp;
};

struct Deleyvalue{
	int chicken;
	int pig;
	int cow;
	int duck;
	int sheep;
	int fish;
	int shrimp;
};

struct foodandvalue{
	int chicken;
	int pig;
	int cow;
	int duck;
	int sheep;
	int fish;
	int shrimp;
	
	float Vchicken;
	float Vpig;
	float Vcow;
	float Vduck;
	float Vsheep;
	float Vfish;
	float Vshrimp;
};


struct data DataPlayer;
struct animalandvalue DataAnimal;
struct foodandvalue DataFood;
struct animalevel DataLevel;
struct Deleyvalue DataDeley;

void setup()
{
	DataPlayer.day = 1;
	strcpy(DataPlayer.farmname,"Farm");
	strcpy(DataPlayer.Owner,"You");
	DataPlayer.money = 1500;
	
	DataAnimal.chicken = 0;
	DataAnimal.pig = 0;
	DataAnimal.cow = 0;
	DataAnimal.duck = 0;
	DataAnimal.sheep = 0;
	DataAnimal.fish = 0;
	DataAnimal.shrimp = 0;
	
	DataAnimal.Vchicken = 500;
	DataAnimal.Vpig = 1000;
	DataAnimal.Vcow = 2000;
	DataAnimal.Vduck = 700;
	DataAnimal.Vsheep = 5000;
	DataAnimal.Vfish = 300;
	DataAnimal.Vshrimp = 500;
	
	DataFood.chicken = 0;
	DataFood.pig = 0;
	DataFood.cow = 0;
	DataFood.duck = 0;
	DataFood.sheep = 0;
	DataFood.fish = 0;
	DataFood.shrimp = 0;
	
	DataFood.Vchicken = 50;
	DataFood.Vpig = 100;
	DataFood.Vcow = 200;
	DataFood.Vduck = 60;
	DataFood.Vsheep = 300;
	DataFood.Vfish = 20;
	DataFood.Vshrimp = 50;
	
	DataLevel.chicken = 0;
	DataLevel.pig = 0;
	DataLevel.cow = 0;
	DataLevel.duck = 0;
	DataLevel.sheep = 0;
	DataLevel.fish = 0;
	DataLevel.shrimp = 0;
	
	DataDeley.chicken = 0;
	DataDeley.pig = 0;
	DataDeley.cow = 0;
	DataDeley.duck = 0;
	DataDeley.sheep = 0;
	DataDeley.fish = 0;
	DataDeley.shrimp = 0;
}

void listanimal()
{
	system("cls");
	printf("________________________\n");
	printf("List Animal...\n");
	printf("1) chicken:\t %d\n", DataAnimal.chicken);
	printf("2) pig:\t\t %d\n", DataAnimal.pig);
	printf("3) cow:\t\t %d\n", DataAnimal.cow);
	printf("4) duck:\t %d\n", DataAnimal.duck);
	printf("5) sheep:\t %d\n", DataAnimal.sheep);
	printf("6) fish:\t %d\n", DataAnimal.fish);
	printf("7) shrimp:\t %d\n", DataAnimal.shrimp);
	printf("________________________\n");
	printf("List Food Animal...\n");
	printf("1) chicken:\t %d\n", DataFood.chicken);
	printf("2) pig:\t\t %d\n", DataFood.pig);
	printf("3) cow:\t\t %d\n", DataFood.cow);
	printf("4) duck:\t %d\n", DataFood.duck);
	printf("5) sheep:\t %d\n", DataFood.sheep);
	printf("6) fish:\t %d\n", DataFood.fish);
	printf("7) shrimp:\t %d\n", DataFood.shrimp);
	printf("________________________\n\n");
	printf("Enter to Back...");
	getch();
}


float returnValue(int type, int animal)
{
	float temp;
	if(type == 0)
	{
		if(animal == 1) temp = DataAnimal.Vchicken;
		else if(animal == 2) temp = DataAnimal.Vpig;
		else if(animal == 3) temp = DataAnimal.Vcow;
		else if(animal == 4) temp = DataAnimal.Vduck;
		else if(animal == 5) temp = DataAnimal.Vsheep;
		else if(animal == 6) temp = DataAnimal.Vfish;
		else if(animal == 7) temp = DataAnimal.Vshrimp;
	}
	else if(type == 1)
	{
		if(animal == 1) temp = DataFood.Vchicken;
		else if(animal == 2) temp = DataFood.Vpig;
		else if(animal == 3) temp = DataFood.Vcow;
		else if(animal == 4) temp = DataFood.Vduck;
		else if(animal == 5) temp = DataFood.Vsheep;
		else if(animal == 6) temp = DataFood.Vfish;
		else if(animal == 7) temp = DataFood.Vshrimp;
	}
	else if(type == 2)
	{
		if(animal == 1) temp = DataAnimal.Vchicken + DataAnimal.Vchicken * 0.40;
		else if(animal == 2) temp = DataAnimal.Vpig + DataAnimal.Vpig * 0.40;
		else if(animal == 3) temp = DataAnimal.Vcow + DataAnimal.Vcow * 0.40;
		else if(animal == 4) temp = DataAnimal.Vduck + DataAnimal.Vduck * 0.40;
		else if(animal == 5) temp = DataAnimal.Vsheep + DataAnimal.Vsheep * 0.40;
		else if(animal == 6) temp = DataAnimal.Vfish + DataAnimal.Vfish * 0.40;
		else if(animal == 7) temp = DataAnimal.Vshrimp + DataAnimal.Vshrimp * 0.40;
	}
	return temp;
}

int returnValueAni(int type, int animal)
{
	int temp;
	if(type == 0)
	{
		if(animal == 1) temp = DataAnimal.chicken;
		else if(animal == 2) temp = DataAnimal.pig;
		else if(animal == 3) temp = DataAnimal.cow;
		else if(animal == 4) temp = DataAnimal.duck;
		else if(animal == 5) temp = DataAnimal.sheep;
		else if(animal == 6) temp = DataAnimal.fish;
		else if(animal == 7) temp = DataAnimal.shrimp;
	}
	else if(type == 1)
	{
		if(animal == 1) temp = DataFood.chicken;
		else if(animal == 2) temp = DataFood.pig;
		else if(animal == 3) temp = DataFood.cow;
		else if(animal == 4) temp = DataFood.duck;
		else if(animal == 5) temp = DataFood.sheep;
		else if(animal == 6) temp = DataFood.fish;
		else if(animal == 7) temp = DataFood.shrimp;
	}
	else if(type == 2)
	{
		if(animal == 1) temp = DataDeley.chicken;
		else if(animal == 2) temp = DataDeley.pig;
		else if(animal == 3) temp = DataDeley.cow;
		else if(animal == 4) temp = DataDeley.duck;
		else if(animal == 5) temp = DataDeley.sheep;
		else if(animal == 6) temp = DataDeley.fish;
		else if(animal == 7) temp = DataDeley.shrimp;
	}
	return temp;
}

void addValue(int type, int animal)
{
	if(type == 0)
	{
		if(animal == 1) DataAnimal.chicken++;
		else if(animal == 2) DataAnimal.pig++;
		else if(animal == 3) DataAnimal.cow++;
		else if(animal == 4) DataAnimal.duck++;
		else if(animal == 5) DataAnimal.sheep++;
		else if(animal == 6) DataAnimal.fish++;
		else if(animal == 7) DataAnimal.shrimp++;
		printf("Buy...");
	}
	else if(type == 1)
	{
		if(animal == 1) DataFood.chicken++;
		else if(animal == 2) DataFood.pig++;
		else if(animal == 3) DataFood.cow++;
		else if(animal == 4) DataFood.duck++;
		else if(animal == 5) DataFood.sheep++;
		else if(animal == 6) DataFood.fish++;
		else if(animal == 7) DataFood.shrimp++;
		printf("Buy...");
	}
}

void checkAnimal(int animal)
{
	float amineVsale = returnValue(0, animal);
	if(animal == 1 && DataAnimal.chicken < 1) 
	{
		DataPlayer.money -= amineVsale;
		addValue(0, 1);
	}
	else if(animal == 2 && DataAnimal.pig < 1)
	{
		DataPlayer.money -= amineVsale;
		addValue(0, 2);
	}
	else if(animal == 3 && DataAnimal.cow < 1) 
	{
		DataPlayer.money -= amineVsale;
		addValue(0, 3);
	}
	else if(animal == 4 && DataAnimal.duck < 1) 
	{
		DataPlayer.money -= amineVsale;
		addValue(0, 4);
	}
	else if(animal == 5 && DataAnimal.sheep < 1) 
	{
		DataPlayer.money -= amineVsale;
		addValue(0, 5);
	}
	else if(animal == 6 && DataAnimal.fish < 1) 
	{
		DataPlayer.money -= amineVsale;
		addValue(0, 6);
	}
	else if(animal == 7 && DataAnimal.shrimp < 1) 
	{
		DataPlayer.money -= amineVsale;
		addValue(0, 7);
	}
	else
	{
		printf("Full area...");
	}
}

void removeValue(int type, int animal)
{
	if(type == 0)
	{
		if(animal == 1) DataAnimal.chicken--;
		else if(animal == 2) DataAnimal.pig--;
		else if(animal == 3) DataAnimal.cow--;
		else if(animal == 4) DataAnimal.duck--;
		else if(animal == 5) DataAnimal.sheep--;
		else if(animal == 6) DataAnimal.fish--;
		else if(animal == 7) DataAnimal.shrimp--;
		printf("Sale...");
	}
	else if(type == 1)
	{
		if(animal == 1) 
		{
			DataDeley.chicken++;
			if(DataLevel.chicken != 3)
			{
				DataLevel.chicken++;
			}
			DataFood.chicken--;
		}
		else if(animal == 2) 
		{
			DataDeley.pig++;
			if(DataLevel.pig != 3)
			{
				DataLevel.pig++;
			}
			DataFood.pig--;
		}
		else if(animal == 3) 
		{
			DataDeley.cow++;
			if(DataLevel.cow != 3)
			{
				DataLevel.cow++;
			}
			DataFood.cow--;
		}
		else if(animal == 4) 
		{
			DataDeley.duck++;
			if(DataLevel.duck != 3)
			{
				DataLevel.duck++;
			}
			DataFood.duck--;
		}
		else if(animal == 5) 
		{
			DataDeley.sheep++;
			if(DataLevel.sheep != 3)
			{
				DataLevel.sheep++;
			}
			DataFood.sheep--;
		}
		else if(animal == 6) 
		{
			DataDeley.fish++;
			if(DataLevel.fish != 3)
			{
				DataLevel.fish++;
			}
			DataFood.fish--;
		}
		else if(animal == 7) 
		{
			DataDeley.shrimp++;
			if(DataLevel.shrimp != 3)
			{
				DataLevel.shrimp++;
			}
			DataFood.shrimp--;	
		}
		printf("Feeding...");
	}
}

void checkAnimalforsale(int animal)
{
	float amineVsale = returnValue(2, animal);
	if(animal == 1 && DataAnimal.chicken == 1 && DataLevel.chicken == 3) 
	{
		DataPlayer.money += amineVsale;
		removeValue(0, 1);
	}
	else if(animal == 2 && DataAnimal.pig == 1 && DataLevel.pig == 3) 
	{
		DataPlayer.money += amineVsale;
		removeValue(0, 2);
	}
	else if(animal == 3 && DataAnimal.cow == 1 && DataLevel.cow == 3) 
	{
		DataPlayer.money += amineVsale;
		removeValue(0, 3);	
	}
	else if(animal == 4 && DataAnimal.duck == 1 && DataLevel.duck == 3) 
	{
		DataPlayer.money += amineVsale;
		removeValue(0, 4);
	}
	else if(animal == 5 && DataAnimal.sheep == 1 && DataLevel.sheep == 3)
	{
		DataPlayer.money += amineVsale;
		removeValue(0, 5);
	}
	else if(animal == 6 && DataAnimal.fish == 1 && DataLevel.fish == 3)
	{
		DataPlayer.money += amineVsale;
		removeValue(0, 6);
	}
	else if(animal == 7 && DataAnimal.shrimp == 1 && DataLevel.shrimp == 3) 
	{
		DataPlayer.money += amineVsale;
		removeValue(0, 7);
	}
	else printf("Can't sell...");
}

void checkAnimalforsaleUrgent(int animal)
{
	float amineVsale = returnValue(0, animal);
	if(animal == 1 && DataAnimal.chicken == 1) 
	{
		DataPlayer.money += amineVsale;
		removeValue(0, 1);
	}
	else if(animal == 2 && DataAnimal.pig == 1)
	{
		DataPlayer.money += amineVsale;
		removeValue(0, 2);
	}
	else if(animal == 3 && DataAnimal.cow == 1) 
	{
		DataPlayer.money += amineVsale;
		removeValue(0, 3);	
	}
	else if(animal == 4 && DataAnimal.duck == 1) 
	{
		DataPlayer.money += amineVsale;
		removeValue(0, 4);
	}
	else if(animal == 5 && DataAnimal.sheep == 1)
	{
		DataPlayer.money += amineVsale;
		removeValue(0, 5);
	}
	else if(animal == 6 && DataAnimal.fish == 1)
	{
		DataPlayer.money += amineVsale;
		removeValue(0, 6);
	}
	else if(animal == 7 && DataAnimal.shrimp == 1) 
	{
		DataPlayer.money += amineVsale;
		removeValue(0, 7);
	}
	else printf("You don't have an animal...");
}

void shopanimal()
{
	for(;;)
	{
	
		int menu;
		int menu2;
		system("cls");
		
		printf("1) Buy animal\n");
		printf("2) Sell animal\n");
		printf("3) Urgent Sale\n");
		printf("0) Back\n");
	
		printf("\npress: ");
		scanf("%d", &menu);
		
		if (menu == 1) 
		{
			system("cls");
			printf("Buy Animal...\n");
			printf("1) chicken:\t %0.0f\tbath\n", DataAnimal.Vchicken);
			printf("2) pig:\t\t %0.0f\tbath\n", DataAnimal.Vpig);
			printf("3) cow:\t\t %0.0f\tbath\n", DataAnimal.Vcow);
			printf("4) duck:\t %0.0f\tbath\n", DataAnimal.Vduck);
			printf("5) sheep:\t %0.0f\tbath\n", DataAnimal.Vsheep); 
			printf("6) fish:\t %0.0f\tbath\n", DataAnimal.Vfish);
			printf("7) shrimp:\t %0.0f\tbath\n", DataAnimal.Vshrimp);
			printf("0) Back\n");
			printf("_______________________________\n");
			
			printf("\npress: ");
			scanf("%d", &menu2);
			
			float valueanmine = returnValue(0,menu2);
			if(menu2 == 0) break;
			if(valueanmine > DataPlayer.money)
			{
				printf("not enough money..\n");
				getch();
			}
			else
			{
				checkAnimal(menu2);
				getch();
			}
			continue;
		}
		else if (menu == 2) 
		{
			system("cls");
			printf("Buy Animal...\n");
			printf("1) chicken:\t %0.0f\tbath\n", DataAnimal.Vchicken + DataAnimal.Vchicken * 0.40);
			printf("2) pig:\t\t %0.0f\tbath\n", DataAnimal.Vpig + DataAnimal.Vpig * 0.40);
			printf("3) cow:\t\t %0.0f\tbath\n", DataAnimal.Vcow + DataAnimal.Vcow * 0.40);
			printf("4) duck:\t %0.0f\tbath\n", DataAnimal.Vduck + DataAnimal.Vduck* 0.40);
			printf("5) sheep:\t %0.0f\tbath\n", DataAnimal.Vsheep + DataAnimal.Vsheep* 0.40); 
			printf("6) fish:\t %0.0f\tbath\n", DataAnimal.Vfish + DataAnimal.Vfish* 0.40);
			printf("7) shrimp:\t %0.0f\tbath\n", DataAnimal.Vshrimp + DataAnimal.Vshrimp * 0.40);
			printf("0) Back\n");
			printf("_______________________________\n");
			
			printf("\npress: ");
			scanf("%d", &menu2);
			
			if(menu2 == 0) break;
			checkAnimalforsale(menu2);
			getch();
			continue;
		}
		else if (menu == 3) 
		{
			system("cls");
			printf("Buy Animal...\n");
			printf("1) chicken:\t %0.0f\tbath\n", DataAnimal.Vchicken);
			printf("2) pig:\t\t %0.0f\tbath\n", DataAnimal.Vpig);
			printf("3) cow:\t\t %0.0f\tbath\n", DataAnimal.Vcow);
			printf("4) duck:\t %0.0f\tbath\n", DataAnimal.Vduck);
			printf("5) sheep:\t %0.0f\tbath\n", DataAnimal.Vsheep); 
			printf("6) fish:\t %0.0f\tbath\n", DataAnimal.Vfish);
			printf("7) shrimp:\t %0.0f\tbath\n", DataAnimal.Vshrimp);
			printf("0) Back\n");
			printf("_______________________________\n");
			
			printf("\npress: ");
			scanf("%d", &menu2);
			
			if(menu2 == 0) break;
			checkAnimalforsaleUrgent(menu2);
			getch();
			continue;
		}
		else if (menu == 0) 
		{
			break;
		}
		else
		{
			continue;
		}
	}
}

void shopfoodanimal()
{
	for(;;)
	{
		int menu2;
		
		system("cls");
		printf("Buy Food Animal...\n");
		printf("1) chicken:\t %0.0f\tbath\n", DataFood.Vchicken);
		printf("2) pig:\t\t %0.0f\tbath\n", DataFood.Vpig);
		printf("3) cow:\t\t %0.0f\tbath\n", DataFood.Vcow);
		printf("4) duck:\t %0.0f\tbath\n", DataFood.Vduck);
		printf("5) sheep:\t %0.0f\tbath\n", DataFood.Vsheep); 
		printf("7) shrimp:\t %0.0f\tbath\n", DataFood.Vshrimp);
		printf("0) Back\n");
		printf("_______________________________\n");	
		printf("\npress: ");
		scanf("%d", &menu2);
		
		if(menu2 == 0) break;
		float valuefood = returnValue(1,menu2);
		if(valuefood > DataPlayer.money)
		{
			printf("not enough money..\n");
			getch();
		}
		else
		{
			DataPlayer.money -= valuefood;
			addValue(1, menu2);
			getch();
		}
	}
}

void feedanimals()
{
	for(;;)
	{
		int menu2;
		system("cls");
		
		
		printf("List Animal...\n");
		if(DataAnimal.chicken != 0)
		{
			printf("1) chicken\t Growth: %d\n", DataLevel.chicken);
		}
		if(DataAnimal.pig != 0)
		{
			printf("2) pig:\t Growth: %d\n", DataLevel.pig);
		}
		if(DataAnimal.cow != 0)
		{
			printf("3) cow:\t Growth: %d\n", DataLevel.cow);
		}
		if(DataAnimal.sheep != 0)
		{
			printf("4) sheep:\t Growth: %d\n", DataLevel.sheep);
		}
		if(DataAnimal.duck != 0)
		{
			printf("5) duck:\t Growth: %d\n", DataLevel.duck);
		}
		if(DataAnimal.fish != 0)
		{
			printf("6) fish:\t Growth: %d\n", DataLevel.fish);
		}
		if(DataAnimal.shrimp != 0)
		{
			printf("7) shrimp:\t Growth: %d\n", DataLevel.shrimp);
		}
		printf("___________________________\n");	
		printf("0) Back\n\n");
		printf("press: ");
		scanf("%d", &menu2);
		
		if(menu2 == 0) break;
		
		int ani = returnValueAni(0,menu2);
		int food = returnValueAni(1,menu2);
		int deley = returnValueAni(2,menu2);
		if(ani != 0)
		{
			if(food != 0)
			{
				if(deley == 0)
				{
					removeValue(1, menu2);
					getch();
					continue;
				}
				else
				{
					printf("You can feed the next day....");
					getch();
					continue;
				}
				
			}
			else
			{
				printf("No food... \n");
				getch();
				continue;
			}
		}
		else
		{
			printf("No animal... \n");
			getch();
			continue;
		}
		getch();
	}
}

void Onsleep()
{
	system("cls");
	DataPlayer.day++;
	DataDeley.chicken = 0;
	DataDeley.pig = 0;
	DataDeley.cow = 0;
	DataDeley.duck = 0;
	DataDeley.sheep = 0;
	DataDeley.fish = 0;
	DataDeley.shrimp = 0;
	printf("Sleep....");
	getch();
}

void menuFunction()
{
	for(;;)
	{
		int menu;
		system("cls");
		printf("Farm name: %s.\n", DataPlayer.farmname);
		printf("Owner: %s.\n", DataPlayer.Owner);
		printf("Money  %.0f\n", DataPlayer.money);
		printf("Day %d\n\n", DataPlayer.day);
		
		printf("1) List animal\n");
		printf("2) Animal shop\n");
		printf("3) Pet food shop\n");
		printf("4) Feed the animal\n");
		printf("5) Sleep\n");
		printf("0) Quit\n");
		
		printf("\npress: ");
		scanf("%d", &menu);
		
		
		if (menu == 1) 
		{
			listanimal(); 
			continue;
		}
		else if (menu == 2) 
		{
			shopanimal();
			continue;
		}
		else if (menu == 3) 
		{
			shopfoodanimal();
			continue;
		}
		else if (menu == 4) 
		{
			feedanimals();
			continue;
		}
		else if (menu == 5) 
		{
			Onsleep();
			continue;
		}
		else if (menu == 0) 
		{
			break;
		}
		else
		{
			continue;
		}
	}
}

void TitleGame()
{
	printf("Dev: Welcom to Game AnimalFarm.\n");
	getch();
	printf("Dev: You will be the owner of this farm.\n");
	getch();
	printf("Dev: You have to make this farm prosperous..\n");
	getch();
	
	printf("\nDev: First you need to name your farm.\n");
	printf("%s: ", DataPlayer.Owner);
	scanf("%s", DataPlayer.farmname);
	
	printf("\nDev: And what is your name?.\n");
	printf("%s: ", DataPlayer.Owner);
	scanf("%s", DataPlayer.Owner);
	
	printf("\nDev: You will get money from 1500 baht.\n");
	getch();
	printf("Dev: Have fun with this game.\n");
	getch();
}

main()
{
	
	setup();
	TitleGame();
	menuFunction();
}


