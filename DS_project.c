#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void add();
void disp();
void push();
void createnode();
void printstar();
void display();
void latest();
void posf();
void negf();
void review();
void add();
void call();
void disp();
// Creating Self-Referential structure for Linked List
typedef struct node {
	int sec;
	int bud;
	int psf;
	int cmc;
	int ps;
	int rm;
	int ne;
	int mst;
	int over;
	char rev[101];
	struct node *next;
	struct node *prev;
} node;

node *start1 = NULL;
node *start2 = NULL;
node *start3 = NULL;
node *start4 = NULL;
node *start5 = NULL;
node *stack = NULL;

//int sec,int bud,int psf,int cmc,int ps,int rm,int ne,int mst,char rev[100]
int ratings() {
	char star[4];
	do {
		//	getchar();
		gets(star);
		if (strlen(star) > 5) {
			printf("Enter less than 5\n");
		}
	} while (strlen(star) > 5);
	return strlen(star);
}

// To push data(stars) in Stacks
void push(int a, int b, int c, int d, int e, int f, int g, int h, int i, char str[]) {

	node *st = (node *)malloc(sizeof(node));
	st->over = a;
	st->bud = b;
	st->cmc = c;
	st->mst = d;
	st->ne = e;
	st->ps = f;
	st->psf = g;
	st->rm = h;
	st->sec = i;
	strcpy(st->rev, str);

	if (stack == NULL) {

		st->next = NULL;
		st->prev = NULL;
		stack = st;
	}
	else {
		st->prev = NULL;
		st->next = stack;
		st->prev = NULL;
		stack = st;
	}
}

// To create / Input values in Linked-list
void createnode(int over, node **start) {

	node *ptr = (node *)malloc(sizeof(node));
	node *p = *start;

	printf("\n\n\tYour review is at most importat to us\t\t\n");
	printf("\n\tEnter review\n");
	printf("\n\t\tHow Many Stars would you like to give us ?For\t");
	//printf("\n\tOverAll\t\n");
	//scanf("%d",&ptr->over);
	ptr->over = over;
	printf("\n\t\t\tSecurity:   ");
	getchar();
	ptr->sec = ratings();
	//scanf("%d",&ptr->sec);
	printf("\t\t\tBudgeting:   ");
	ptr->bud = ratings();
	//scanf("%d",&ptr->bud);
	printf("\t\t\tPowerful Search and Filters:   ");
	ptr->psf = ratings();
	//scanf("%d",&ptr->psf);

	printf("\t\t\tIntegrated Calendars ,Maps ,Calculators:   ");
	//scanf("%d",&ptr->cmc);
	ptr->cmc = ratings();
	printf("\t\t\tPayment Services:   ");
	//scanf("%d",&ptr->ps);
	ptr->ps = ratings();
	printf("\t\t\tReading Manuals:   ");
	//scanf("%d",&ptr->rm);
	ptr->rm = ratings();
	printf("\t\t\tNews:   ");
	//scanf("%d",&ptr->ne);
	ptr->ne = ratings();
	printf("\t\t\tMoney Saving Tips:   ");
	ptr->mst = ratings();
	//scanf("%d",&ptr->mst);
	printf("\n\t\tYour Remarks,If Any(in 101 words or less)\n");
	printf("\t\t\t");
	char rev[101];
	//getchar();
	gets(rev);
	strcpy(ptr->rev, rev);

	if (p == NULL) {

		ptr->next = NULL;
		ptr->prev = NULL;
		*start = ptr;
	}
	else {
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = ptr;
		ptr->prev = p;
		ptr->next = NULL;
	}

	push(ptr->over, ptr->bud, ptr->cmc, ptr->mst, ptr->ne, ptr->ps, ptr->psf, ptr->rm, ptr->sec, ptr->rev);
}

// For printing how many stars user had given
void printstar(int a) {
	printf(":  ");
	while (a--)	{
		printf("*");
	}
	printf("\n");
}

// Display your Reviews
void display(node *ptr) {

	int i = 1, j=1;
	while (ptr != NULL) {
		printf("\t\t-----------------------------------------------------------------------------------------------------------------------\n");
		printf("\n\n\n\t\t\t\t\t\t\t\t\t~~~~  Review %d  ~~~~\n", j); j++;
		printf("\n\t\t\t\t\t\t\tYour Review:-\n");
		printf("\t\t\t\t\t\t\t\tOverAll");
		printstar(ptr->over);
		printf("\t\t\t\t\t\t\t\tSecurity");
		printstar(ptr->sec);
		printf("\t\t\t\t\t\t\t\tBudgeting");
		printstar(ptr->bud);
		printf("\t\t\t\t\t\t\t\tPowerful Search & Filters");
		printstar(ptr->psf);
		printf("\t\t\t\t\t\t\t\tIntegrated Calendars Maps & Calculators");
		printstar(ptr->cmc);
		printf("\t\t\t\t\t\t\t\tPayment Service");
		printstar(ptr->ps);
		printf("\t\t\t\t\t\t\t\tReading Manuals");
		printstar(ptr->rm);
		printf("\t\t\t\t\t\t\t\tNews");
		printstar(ptr->ne);
		printf("\t\t\t\t\t\t\t\tMoney Saving Tips");
		printstar(ptr->mst);
		printf("\t\t\t\t\t\t\t\tYour Review:\n\t\t\t\t\t\t\t\t\t");
		puts(ptr->rev);
		printf("\n\t");
		ptr = ptr->next;
		i++;
	}
}

// Display the Most Recent Review
void latest(int n) {
	node *ptr = stack;
	int i = 0;
	printf("\t\t\t-----------------------------------------------------------------------------------------------------------------------\n");
	while (i < n) {
		printf("\n\n\n\t\t\t\t\t\t\t\t\t~~~~ Most Recent ~~~~\n");
		printf("\n\t\t\t\t\t\t\tYour Review:-\n");
		printf("\t\t\t\t\t\t\t\tOverAll:   ");
		printstar(ptr->over);
		printf("\t\t\t\t\t\t\t\tSecurity:   ");
		printstar(ptr->sec);
		printf("\t\t\t\t\t\t\t\tBudgeting:   ");
		printstar(ptr->bud);
		printf("\t\t\t\t\t\t\t\tPowerful Search & Filters:   ");
		printstar(ptr->psf);
		printf("\t\t\t\t\t\t\t\tIntegrated Calendars Maps & Calculators:   ");
		printstar(ptr->cmc);
		printf("\t\t\t\t\t\t\t\tPayment Service:   ");
		printstar(ptr->ps);
		printf("\t\t\t\t\t\t\t\tReading Manuals:   ");
		printstar(ptr->rm);
		printf("\t\t\t\t\t\t\t\tNews:   ");
		printstar(ptr->ne);
		printf("\t\t\t\t\t\t\t\tMoney Saving Tips:   ");
		printstar(ptr->mst);
		printf("\t\t\t\t\t\t\t\tYour Review: \n\t\t\t\t\t\t\t\t\t");
		puts(ptr->rev);
		ptr = ptr->next;
		i++;
		if (ptr == NULL) {
			i = n;
		}
	}
}

// To print the Positive Reviews first
void posf() {
	display(start5);
	display(start4);
	display(start3);
}

// To print the Negative Reviews first
void negf() {
	display(start1);
	display(start2);
	display(start3);
}

// Layout of the Project
void review() {
	int option;
	printf("\t\t\t\t  **********************************************************************************************  \n");
	printf("\t\t\t\t  ----------------------------------------------------------------------------------------------  \n\n");
	printf("%101s \n\n", "/////////~     CASHIER     ~\\\\\\\\\\\\\\\\\\");
	printf("\t\t\t\t  ----------------------------------------------------------------------------------------------  \n");
	printf("\t\t\t\t  **********************************************************************************************  \n\n\n\n");
	
	do {
		printf("%118s","-------------<:YOUR REVIEW IS OF UTMOST IMPORTANCE TO US:>-------------");

		printf("\n\n\n\n %80s \n", "PRESS 1 TO CONTINUE");
		printf("\n %76s \n", "PRESS 2 TO EXIT");
		printf("\n\n %90s  ", " What is your option (1 OR 2)?");
		scanf("%d", &option);

		switch (option) {
		case 1:
			add();
			break;
		case 2:
			printf("\nSee you next time :)");
			exit(0);
			break;
		default:
			printf("Please select a correct number (1 OR 2)!");
		}
	} while (option != 2);
}

// To move forward in Project
void add() {
	int option;
	
	do {
		printf("\n\t-----------------------------------------------------------------------------------------------------------------------\n");
		printf("\t-----------------------------------------------------------------------------------------------------------------------\n");

		printf("\n\n\n\t 1. RECORD YOUR REVIEW:\t\n");
		printf("\n\t 2. DISPLAY YOUR REVIEWS\t\n");

		printf("\n\t 3. EXIT\t\n");
		printf("\n\t What is your option (1-3)?   ");
		scanf("%d", &option);
		switch (option) {
		case 1:
			call();
			break;
		case 2:
			disp();
			break;

		case 3:
			printf("See you next time :)");
			exit(0);
			break;
		default:
			printf("Please select a correct number (1-3)!");
		}
	} while (option != 3);
}

// To move on the Display part in Review system
void disp() {
	int option;

	do {
		printf("\n\n\t================================================================================================================================\n");
		printf("\n\t\t 1. ALL REVIEWS \n");
		printf("\n\t\t 2. POSITIVE FIRST\n");
		printf("\n\t\t 3. NEGATIVE FIRST\n");
		printf("\n\t\t 4. MOST RECENT \n");

		printf("\n\t\t 5. EXIT\n");
		printf("\n\t\tWhat is your option (1-5)? \n\t\t");
		scanf("%d", &option);
		switch (option)	{
		case 1:
			posf();
			display(start2);
			display(start1);
			break;
		case 2:
			posf();
			break;
		case 3:
			negf();
			break;
		case 4:
			latest(1);
			break;

		case 5:
			printf("See you next time :)");
			exit(0);
			break;
		default:
			printf("Please select a correct number (1-5)!");
		}
	} while (option != 5);
}

// To move in the Record part of the Review
void call() {
	printf("\n\t OverAll :   ");
	getchar();
	int option = ratings();

	do {
		switch (option)	{
		case 1:
			createnode(1, &start1);
			break;
		case 2:
			createnode(2, &start2);
			break;
		case 3:
			createnode(3, &start3);
			break;
		case 4:
			createnode(4, &start4);
			break;
		case 5:
			createnode(5, &start5);
			break;

		case 6:
			printf("See you next time :)");
			exit(0);
			break;
		default:
			printf("Please select a correct number (1-6)!");
		}
	} while (0);
}

int main() {

	node *s = (node *)malloc(sizeof(node));
	node *p = (node *)malloc(sizeof(node));
	node *x = (node *)malloc(sizeof(node));
	node *t = (node *)malloc(sizeof(node));

	s->bud = 5;
	s->cmc = 5;
	s->mst = 5;
	s->ne = 5;
	s->over = 5;
	s->ps = 5;
	s->psf = 5;
	s->rm = 5;
	s->sec = 5;
	char rev3[100] = "NICE REPRESENTATION";
	s->next = p;
	s->prev = NULL;
	strcpy(s->rev, rev3);

	p->bud = 5;
	p->cmc = 5;
	p->mst = 5;
	p->ne = 5;
	p->over = 5;
	p->ps = 5;
	p->psf = 5;
	p->rm = 5;
	p->sec = 5;
	char rev[100] = "good";
	p->next = x;
	p->prev = s;
	strcpy(p->rev, rev);

	t->bud = 4;
	t->cmc = 3;
	t->mst = 2;
	t->ne = 1;
	t->over = 2;
	t->ps = 1;
	t->psf = 3;
	t->rm = 4;
	t->sec = 2;
	char rev4[100] = "It has great potential, please implement it properly.";
	t->next == NULL;
	t->prev = NULL;
	strcpy(t->rev, rev4);

	x->bud = 5;
	x->cmc = 1;
	x->mst = 5;
	x->ne = 3;
	x->over = 5;
	x->ps = 5;
	x->psf = 4;
	x->rm = 5;
	x->sec = 3;
	char rev8[100] = "great work guys";
	x->next = NULL;
	x->prev = p;
	strcpy(x->rev, rev8);

	start5 = s;
	//    createnode(&start1);
	push(s->over, s->bud, s->cmc, s->mst, s->ne, s->ps, s->psf, s->rm, s->sec, s->rev);
	push(p->over, p->bud, p->cmc, p->mst, p->ne, p->ps, p->psf, p->rm, p->sec, p->rev);
	push(x->over, x->bud, x->cmc, x->mst, x->ne, x->ps, x->psf, x->rm, x->sec, x->rev);
	push(t->over, t->bud, t->cmc, t->mst, t->ne, t->ps, t->psf, t->rm, t->sec, t->rev);
	review();

	//createnode(&start1);
	//push(s);
	//push(x);
	// display(start1);
	//  latest(1);
	return 0;
}