// check vowel and consonant

#include <stdio.h>
int main(){
	char ch = 'd';
	
	 if ((ch>='A'&& ch <='Z')  || (ch >= 'a'&& ch <='z')){
	 	if (ch == 'a'|| ch =='e'|| ch=='i' || ch=='o'||ch=='u'||
		 ch== 'A'|| ch== 'E'||ch=='I'|| ch=='O'||ch=='U')
		 	{
		 		printf("%c is a vowel.\n",ch);
		 		
			 }
			 else {
			 	printf("%c is a consonant.\n",ch);
			 	
			 }
		}
			 return 0 ;
	 
}
