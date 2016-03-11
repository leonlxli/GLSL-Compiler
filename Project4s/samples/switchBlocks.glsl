int switchBlocks()
{
    int x;
	x = 5;
	int y;
	switch(x){
		case 4:{
			y = 2;
			}
		case 5:{
			y = 10;
			y++;
			break;
			}
		default:{
			y = 1;
			}
		}
	return y;
}