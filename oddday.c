# include <stdio.h> 
# include <conio.h> 
void main() 
{ 
 int month[12] = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31}; 
 int date, mon, year, i, r, s = 0 ; 
 clrscr(); 
 strcpy(week[0], "Sunday") ; 
 strcpy(week[1], "Monday") ; 
 strcpy(week[2], "Tuesday") ; 
 strcpy(week[3], "Wednesday") ; 
 strcpy(week[4], "Thursday") ; 
 strcpy(week[5], "Friday") ; 
 strcpy(week[6], "Saturday") ; 
 printf("Enter a valid date (dd/mm/yyyy) : ") ; 
 scanf("%d / %d / %d", &date, &mon, &year) ; 
 if( (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)) ) 
  month[1] = 29 ; 
 for(i = 0 ; i < mon - 1 ; i++) 
  s = s + month[i] ; 
 s = s + (date + year + (year / 4) - 2) ; 
 s = s % 7 ; 
 printf("\nThe day is : %s", day[i]) ; 
 getch() ; 
}

