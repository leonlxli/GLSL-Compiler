int main() {
	int x;
	int y;
	x = 10;
	y = 0;
	switch(x) {
		y++;
		case 1: y = 1; break;

		case 2: {
			y = 2;
			y *= 2;
			break;
		}
		default:  y = -1; break;
		//default: return 1;
	}
	y++;
	return y; // 0
}