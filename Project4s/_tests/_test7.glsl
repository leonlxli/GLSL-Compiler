vec2 v2;
vec2 v3;

float test7()
{
	vec2 v4;

	float x;
	x = 5.0;

	v3.y = v2.y;
	v4 = v2 + v3;
	v4.x = v3.y;

	return v4.x;
}