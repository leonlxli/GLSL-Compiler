int a;

int test1()
{
	int i;
	for (i = 0; i < 5; i++) {
	    if (i < 3) {
	    	a++;
	        break;
	    }
	}
	return a;
}
