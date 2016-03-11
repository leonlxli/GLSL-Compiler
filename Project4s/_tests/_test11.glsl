vec2 v2;

float test11()
{
	vec2 v3;
	v3.x = 3.0;
	v3.y = 1.0;

	v3 *= v2;
	v3 -= v2;
	v3 += v2;
	v3 /= v2;

	return v3.x + v3.y;
}