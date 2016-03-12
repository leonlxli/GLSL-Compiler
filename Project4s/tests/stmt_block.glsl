int main(){
	int x;
	x = 0;
	;
	{
		int y;
		y = 1;
		x += y;
	}
	{
		int y;
		y = 2;
		{
			{
				x += y;
			}
			;
		}
		{
			y = 3;
		}
		x += y;
	}
	return x; // 6
}