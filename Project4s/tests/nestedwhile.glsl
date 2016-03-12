int g; // 5

int nestedwhile(int x) { // 5
	int j;

	while( x > 0 ){
		for( j = 0; j < 5; j++){
			g*=2;
		}
	}
	return g;
}