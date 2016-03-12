float main() {
	/* tested - and / too */
	float f;
	vec2 v;
	vec2 u;
	vec2 z;
	f = 0.75;
	v.x = u.x = f; // each has 0.75
	v.y = u.y = f * 2.0; // each has 1.5
	z = v + u; // z = (1.5, 3.0)
	return z.x + z.y; // 4.5
}