float iftest(float arg){
	float f;
	float i;
	i=0.4;
	if (arg > 1.0){
		if(i<0.5){
			f=1.0;
		}
		else{
			f= 2.0;
		}
	}
	else{
		f= arg;
	}
	return f;
}