#include<stdio.h>
 main(){
float python;
float c_language;
float B_E;
float arduino;
float percentage;
float obtained_total; 

printf(" name :lubna");
printf(" class: Navtec");
printf("section:B");

printf("\n enter the marks of python:");
scanf("%f",&python);
printf("\n enter the mask of c language:");
scanf("%f", &c_language);
printf("\n enter the mask of B_E:");
scanf("%f",&B_E);
printf("\n enter the mask of arduino:");
scanf("%f",&arduino);
obtained_total=python,c_language,B_E,arduino;
percentage = (obtained_total/400)*100;
printf("\n percentage:%f",percentage);
if (percentage>90){

printf("\nA");
}
else if (percentage>80){

printf("\nB");
}
else if (percentage>70){

printf("\nC");

}
else if (percentage>60){
	printf("\nD");	
}
else  {	
	printf("\nFail");
}
}
