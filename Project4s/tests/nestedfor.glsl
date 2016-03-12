int x;

int for_loop(int a) {
	int i;
	int j;
	int m;
	int n;

	m = 0;
	n = 0;

	if( a > 5 ) {
		for( i = 0; i < a; i++ ) {
			
			++m;

			for( j = 0; j < a; j++ ) {
				
				++n;

			}
		}
	} else { 
		for( i = a; i > 0; --i ) { 

			m++;
			
			for( j = a; j > 0; --j ) {

				n++;

				if( n == 25 ) {
					m += n;
				} else {
					m *= 2;
				}

			}
		}
	}

	return m+n*x;
}