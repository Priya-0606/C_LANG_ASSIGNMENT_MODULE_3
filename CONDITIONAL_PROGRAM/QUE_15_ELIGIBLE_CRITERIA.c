/* Write a C program to determine eligibility for admission to a professional
course based on the following criteria Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject>=190 or Total in Maths and Physics >=140 
--------------------------------------Input the marks obtained in Physics:65 Input the marks obtained in 
Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths,Physics and Chemistry : 188 
Total marks of Maths and Physics : 137 The candidate is not eligible.
*/

#include<stdio.h>
main()
{
	
	int Maths, Phy, Chem, total1, total2;
	
	printf("\n\n\tEnter Marks of Maths : ");
	scanf("%d",&Maths);
	printf("\n\tEnter Marks of Physics : ");
	scanf("%d",&Phy);
	printf("\n\tEnter Marks of Chemistry : ");
	scanf("%d",&Chem);

	total1 = Maths + Phy + Chem;
	total2 = Maths + Phy;
	printf("\n\tTotal of Three Subjects = %d",total1);
	printf("\n\tTotal of Maths and Physics = %d",total2);
	
	if (Maths >=65 && Phy >=55 && Chem>=50 && total1>=190 || total2>=140 )
		printf("\n\n\tYou are Eligible !!!");
		
	/* else if (Phy >=55);
		printf("\n\tEligible for Physics");
		
	else if (Chem>=50);
		printf("\n\tEligible for Chemistry"); 
		
	else if (total1>=190)
		printf("\n\tYou are Eligible");
		
	else if (total2>=140)
		printf("\n\t You are Eligible");*/
		
	else
		printf("\n\n\n\t You are Not Eligible!");
	
}
