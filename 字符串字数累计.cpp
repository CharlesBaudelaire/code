void StringCount( char s[] ){
	int letter=0;
	int blank=0;
	int digit=0;
	int other=0;
	int i=0;
	int count=0;
	while(s[i]!='\0'){
	if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) {letter++;} 
		else if(s[i]>='0'&&s[i]<='9') {digit++;} 
		else if(s[i]==' '||s[i]=='\n') {blank++;} 
		else {other++;} 
		i++;
	}
	
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
}
