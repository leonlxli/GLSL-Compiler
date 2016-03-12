int while_jump() {
	int i;
	int j;
	i = 0;

	int y;
	y = 0;
	while(i < 5) {
		if ( i == 4 ) {
			break;
		}
		else {
			++y;
		}
		++i;
	}
	i = 0;
	while ( i < 5 ) {
		++i;
		if( i == 4 ) {
			continue;
		}
		for(j = 0; j < 5; j++) {
			y += 100;
		}
	}
	return y;
}