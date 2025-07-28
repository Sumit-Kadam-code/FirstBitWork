//Input Five Subjects find The total numbers and claculate the percentage 
  #include<stdio.h>
  
  void main(){
  	float  biology = 80.0;
  	float  physics = 78.0;
  	float  math    = 60.0;
  	float  chemistry= 55.0;
  	float  english = 60.0;
  	
  	float totalmarks = biology + physics + math + chemistry + english;
  	float percentage  = (totalmarks/500.0)*100;
  	 printf(" Marks in subject  %.2f,%.2f, %.2f, %.2f, %.2f\n",biology,physics,math,chemistry,english);
  	 
  	 printf("Total Marks %.2f\n",totalmarks);
  	 printf("Percentage %.2f%%\n",percentage);
  	
  	
  }
