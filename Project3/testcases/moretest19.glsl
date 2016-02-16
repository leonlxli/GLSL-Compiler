int main() {
	int x;
	switch (x=5){
	case true: return -1;
	default: return 5;
	}

	switch (x==5){
	default: return 5;
	}
}
