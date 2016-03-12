int main() {
	int x;
	int y;
	int z;
	x = 2;
	y = 0;
	z = 0;
	switch(x) {
		y++;
		case 1: y = -1; break;
		case 2: {
			y++;
			switch(y){
				case 1: {
					switch(z){
						case 0: y += 2;
						default: ;
					}
					switch(x){
						case 2: y++; break;
					}
					break;
				}
				case 2: y = -1; break;
				default: y = -1; break;
			}
			break;
		}
		default:  y = -1; break;
		//default: return 1;
	}
	return y; // 4
}