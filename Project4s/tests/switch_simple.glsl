int main() {
	int x;
	int y;
	x = 1;
	y = 0;
	switch(x) {
		case 1: y = 1;
		case 2: y = 2; break;
		default:  break;
		// //default: return 1;
	}
	y++;
	return y; // 3
}