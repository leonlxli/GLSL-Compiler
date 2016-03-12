float assignequals(float x) {
	float y;
	float z;
	float w;

	x += 1.0;
	y = 2.0;
	z = 4.0;
	w = 6.0;

	x *= 3.0;
	y *= x; // 6.0
	z *= x; // 12.0
	z /= y; // 2.0
	z += x;
	++z;
	w-=z;

	return w;
}