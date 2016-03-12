float simple_add(float x) {
	float y;
	y = 1.5;
	y += x++;

	x = x + (y++);
	return x;
}