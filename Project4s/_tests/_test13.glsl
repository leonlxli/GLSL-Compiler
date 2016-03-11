float test13()
{
	vec2 v3;
	vec4 v4;
	v4.xy = 4.0;
	v4.wz = 3.0;

	if(v4.xy == v4.yx)
	{
		v3.xy = v4.xz;
	}

	return v3.x * v3.y;
}