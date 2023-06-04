# include <bits/stdc++.h>
string dayOfTheWeek(int day, int month, int year) 
{
    // Write your code here.
    string weekday[7] = {"Saturday","Sunday","Monday","Tuesday", "Wednesday","Thursday","Friday"};

    int mon;

   if(month > 2)

      mon = month; 

   else{

      mon = (12+month); 

      year--;

   }

   int y = year % 100; //last two digit

   int c = year / 100; //first two digit

   int w = (day + ((13*(mon+1))/5) + y + (y/4) + (c/4) + (5*c));

   w = w % 7;

   return weekday[w];
}
