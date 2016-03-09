int sample(){
	int i;
	int x;
	x=0;
	i=0;
	while(i<5){
		int j;
		j=0;
		while(j<5){
			x++;
			j++;
		}
		i++;
	}
	return x;
}