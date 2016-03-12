int main(){
	int x;
	int y;
	x = 1;
	y = 3;
	++y;
	x = ++x + ++y;
	return x;
}