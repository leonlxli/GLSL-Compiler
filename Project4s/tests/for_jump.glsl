int while_jump() {
	int i;
	int j;

	int y;
	int w;
	y = 0;
	w = 0;
	for(i = 0; i < 5; i++) {
		if ( i == 4 ) {
			break;
		}
		else {
			++y;
		}
		++i;
	}
	for( i = 0; i < 5; i++ ) {
		if( i == 4 ) {
			continue;
		while(j < 5) {
			w += 100;
			++j;
		}
		}
	}
	return y+w;
}