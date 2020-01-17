#include <stdlib.h>
#include <iostream>
#include <string.h>

void menu();
int nincsOteletem(char[80]);

struct dbUser{
	int id;
	char name[30];
	char description[100];
	dbUser *nextUser;
};

class db{
	dbUser *newUser, *actualUser, *actualUserSearch, *first = NULL, *userBefore;
	public:
		int doChoice(int);
	    void insert();
	    void remove();
	    void print();
	    int search(bool list);
	    void edit();
};

int main(){
	setlocale(LC_ALL, "");
	
	db database;
	int choice;

	while (true) {
		menu();
		scanf("%d", &choice);
		database.doChoice(choice);
	} 
}

int db::doChoice(int choice){
	switch (choice){
		case 1:
			this->insert();
			break;
		case 2:
			this->print();
			break;
		case 3:
			this->remove();
			break;
		case 4:
			this->search(true);
			break;
		case 5:
			this->edit();
			break;
		case 6:
			exit(0);
		default:
			printf("Nincs ilyen lehetõség.\n");
			system("pause");
			break;
	}

	return 0;
}

int nincsOteletem(char *text){
	int i_n = 0;
	do {
		system("cls");
		printf("%s\t[I\\N]", text);
		int error = 0;
		do {
			if (error){
				printf(">");
			}
			else{
				printf("\n>");
			}

			error = 1;
			fflush(stdin);
		} while (!scanf("%c", &i_n));

	} while (toupper(i_n) != 'I' && toupper(i_n) != 'N');
	switch (toupper(i_n)) {
		case 'I':
			return 1;
		case 'N':
			return 0;
		default:
			printf("Hiba\n");
			system("pause");
			break;
	}
}

void menu(){
	system("cls");
	printf("Válasszon a lehetoségek közül!\n\n");
	printf("[1] Új felhasználó\n");
	printf("[2] Kiírás\n");
	printf("[3] Törlés\n");
	printf("[4] Keresés\n");
	printf("[5] Módosítás\n");
	printf("[6] Kilépés\n");
	printf("------------------------\n");
};

void db::insert(){
	system("cls");
	printf("Új adat\n\n");

	newUser = (dbUser*) malloc(sizeof(dbUser));
	if (!newUser){
		printf("Memóriahiba.");
		system("pause");
	}

	int error;
	int id;
		printf("\nAdjon meg egy azonosítót!\n>");
		fflush(stdin);
		scanf("%d", &id);
		if (id>0 && id<=99999 && id != 0) {
			this->actualUserSearch = this->first;
				while (this->actualUserSearch) {
					if ((this->actualUserSearch->id) == id) {
						printf(" \nEz az azonosító már foglalt!\n");
						system("pause");
						error = 1;
						break;
					}
				this->userBefore = this->actualUserSearch;
				this->actualUserSearch = this->actualUserSearch->nextUser;
			}
		} else {
			printf("Az azonosító minimum 1, maximum 99999 lehet!\n");
			system("pause");
			error = 1;
		}

	if(!error) {
		char temp[30];
		int toolong = 0;
		do {
			if (toolong){
				printf("\nA név túl hosszú!\n");
			}
	
			printf("\nAdjon meg egy nevet!\n>");
			fflush(stdin);
			scanf("%[^\n]", temp);
			toolong = 1;
		} while (strlen(temp) >= 30);
		strcpy(this->newUser->name, temp);
		this->newUser->id = id;
	
		char temp2[100];
		toolong = 0;
		do {
			if (toolong){
				printf("\nA leírás túl hosszú!\n");
			}
	
			printf("\nAdjon meg egy leírást!\n>");
			fflush(stdin);
			scanf("%[^\n]", temp2);
			toolong = 1;
		} while (strlen(temp2) >= 100);
		strcpy(this->newUser->description, temp2);
		this->newUser->id = id;
	
		this->newUser->nextUser = NULL;
		this->userBefore = NULL;
		this->actualUser = this->first;
		while (this->actualUser && id > this->actualUser->id){
			this->userBefore = this->actualUser;
			this->actualUser = this->actualUser->nextUser;
		}
	
		if (!this->userBefore){
			this->first = this->newUser;
		}else{
			this->userBefore->nextUser = this->newUser;
		}
	
		this->newUser->nextUser = this->actualUser;
		printf("\nAz adat sikeresen mentve.\n");
		system("pause");
	}
};

void db::print(){
	system("cls");
	printf("Adatok kiírása\n\n");
	printf("ID\t|\t\tNév\t\t|\tLeírás\t\t\n");
	printf("---------------------------------------------------------\n");
	this->actualUserSearch = this->first;
	while (this->actualUserSearch){
		printf("%d\t|%-30s\t|%-40s\n", this->actualUserSearch->id, this->actualUserSearch->name, this->actualUserSearch->description);
		printf("---------------------------------------------------------\n");
		this->actualUserSearch = this->actualUserSearch->nextUser;
	}

	printf("\n\n");
	system("pause");
};

void db::remove(){
	int id = this->search(true);
	system("cls");
	printf("Törlés\n\n");
	if (id < 0){
		if (nincsOteletem("Valóban törölni szeretné a kiválasztott felhasználót?")){
			if (this->actualUserSearch->id == this->first->id){
				this->first = this->actualUserSearch->nextUser;
			}
			else{
				this->userBefore->nextUser = this->actualUserSearch->nextUser;
			}

			free(this->actualUserSearch);
			printf("\nSikeres törlés.\n\n");
			system("pause");
		}
	}
};

int db::search(bool list){
	if (list){
		system("cls");
		printf("Keresés\n\n");
	}

	int idToSearch;

	printf("\nAdjon meg egy azonosítót!");
	int error = 0;
	do {
		if (error){
			printf(">");
		}
		else{
			printf("\n>");
		}

		error = 1;
		fflush(stdin);
	} while (!scanf("%d", &idToSearch));
	if (idToSearch > 0 && idToSearch <= INT_MAX){
		this->actualUserSearch = this->first;
		while (this->actualUserSearch){
			if ((this->actualUserSearch->id) == idToSearch){
				if (list){
					system("cls");
					printf("Keresés\n\n");
					printf("ID\t|\t\tNév\t\t|\t\tLeírás\t\t\n");
					printf("---------------------------------------------------------\n");
					printf("%d\t|%-30s\t|%-40s\n", this->actualUserSearch->id, this->actualUserSearch->name, this->actualUserSearch->description);
					printf("---------------------------------------------------------\n");
					system("pause");
				}

				return (-1 *idToSearch);
			}

			this->userBefore = this->actualUserSearch;
			this->actualUserSearch = this->actualUserSearch->nextUser;
		}

		if (list){
			printf("\nNincs ilyen azonosító.\n\n");
			system("pause");
		}

		return idToSearch;
	}
	else{
		if (list){
			printf("\nNincs ilyen azonosító.\n");
			system("pause");
		}

		return 0;
	}
};

void db::edit(){
	int id = this->search(true);
	system("cls");
	printf("Adatmódosítás\n\n");
	if (id < 0) {
		char temp[30];
		int toolong = 0;
		do {
			if (toolong){
				printf("\nA név túl hosszú!\n");
			}

			printf("\nAdjon meg egy nevet!\n>");
			fflush(stdin);
			scanf("%[^\n]", temp);
			toolong = 1;
		} while (strlen(temp) >= 30);
		strcpy(this->actualUserSearch->name, temp);
		
		char temp2[100];
		toolong = 0;
		do {
			if (toolong){
				printf("\nA leírás túl hosszú!\n");
			}
	
			printf("\nAdjon meg egy leírást!\n>");
			fflush(stdin);
			scanf("%[^\n]", temp2);
			toolong = 1;
		} while (strlen(temp2) >= 100);
		strcpy(this->newUser->description, temp2);
	}
};
