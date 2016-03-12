float main(){
	float x;
	float y;
	x = 1.0;
	y = 3.0;
	--y;
	x = --x + --y;
	return x;
}