double funcos( double e, double x ){
	double m=0;
	int flag=1;
	double temp=0;
	double g=1;
    double f=0;
	do { 
	for (int i=1;i<=f;i++){
		g*=i; 
	}
	m=pow(x,f)/g;
	f+=2;
	temp+=m*flag;
	flag=-flag;
	g=1;
	}while(fabs(m)>e);
	return temp;
	
	
}
