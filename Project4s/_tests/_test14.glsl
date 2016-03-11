int test14()
{
	int j;
	j=0;
	while(j < 10){
  		switch (j){
    		case 5: {
    			j += 35;
    			continue;
    		}
    		default: j++;
  		}
	}
	return j;
}