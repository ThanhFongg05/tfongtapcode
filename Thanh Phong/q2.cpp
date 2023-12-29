#include <stdio.h>
int main ()
{
	int ngay, thang , nam, MaxDay;
	printf ("Input dd mm yyyy: ");
	scanf ("%d %d %d ", & ngay, &thang, &nam);
	if (thang==2)
	{
		if (nam % 4)
	 {
	 	MaxDay= 29;
	 }
	 else
	 {
	 	MaxDay=28;
	 }	 
}
else if (thang == 1 || thang == 3 || thang == 5 || thang ==7 || thang == 8 || thang == 10 || thang == 12 ){
	MaxDay = 31;
}
else {
	MaxDay = 30;
}
if(ngay <= MaxDay && ngay > 0)
{
	printf ("Valid date");
}
else
{
	printf ("Invalid date");
}
}
