int g;

int nestedswitch(int x) {
	switch(x) {
		case 0: {
			g+=1;
			break;
		}
		case 1: {
			while(x > 0) {
				--x;
				--g;
			}
			switch(x) {
				case 0: break;
				default: break;
			}
		}
		default: break;
	}
	return g;
}