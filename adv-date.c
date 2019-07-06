#include <stdio.h>
#include <stdlib.h>

struct date {
        int year;
        int month;
        int day;
    };

void printDate(struct date);
void readDate(struct date *);

struct date advanceDay(struct date); 

int monthMax(int);

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

// Write your readDate(), printDate(), and advanceDate() functions here
int
monthMax(int m)
{
	switch (m) {
	case 1: return 31;
	case 2: return 28;
	case 3: return 31;
	case 4: return 30;
	case 5: return 31;
	case 6: return 30; 
	case 7: return 31; 
	case 8: return 31; 
	case 9: return 30; 
	case 10: return 31; 
	case 11: return 30; 
	case 12: return 31; 
	}
	return -1;
}

struct date 
advanceDay(struct date d) {
	struct date * newd;
	newd = (struct date *)malloc(sizeof(struct date));
	newd->year = d.year;
	newd->day = d.day;
	newd->month = d.month;
	
	newd->day += 1;
	if (newd->day > monthMax(newd->month)) {
		newd->day = 1;
		newd->month += 1;
		if (newd->month > 12) {
			newd->month = 1;
			newd->year += 1;
		}
	}

	return *newd;    
}

void readDate(struct date * d)
{
    scanf("%d%d%d", &d->year, &d->month, &d->day);
}

void printDate(struct date d)
{
    printf("%02d/%02d/%d\n", d.month, d.day, d.year);
    
}


