int fibonacci_recursive(const int value){
	return value<=2 ? 1 : fibonacci_recursive(value - 2) + fibonacci_recursive(value - 1);
}

int fibonacci_iterative(const int value){
	int a = 1, b = 1; 
    for(int i = 2; i<value; i++) {
		a = a + b;
		b = a - b;
	}
	return a;
}