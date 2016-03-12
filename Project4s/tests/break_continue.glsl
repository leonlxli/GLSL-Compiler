int main() {
	int x;
	x = 3;
	while (x < 10) {
		if (x == 7) {
			break;
			x++;
		}
		x++;
	}

	while (x > -1) {
		x--;
		if (x != 0) {
			continue;
			--x;
		}
	}

	return x;
}