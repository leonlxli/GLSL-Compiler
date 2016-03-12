void main() {
	int i;
	bool b;
	float c;
	b = true;
	c = 1.0;
	for(i=0; i < 5; ++i) {
		c *= 2.0;
	}
	for(i=1; i < 4; ++i) {
		c += 0.5;
	}
	while(i < 8) {
		c -= 0.5;
		i++;
	}
	b = false;
}