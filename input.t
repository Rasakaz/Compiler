func foo(x:real) return int {
	var a: int;
	a = 23;
	if(a == 23)
		a = 10;
	else
		a = 19;
	return x + a;
}

proc Main() {
	var a, b:int;
	a = 0;
	while(a < 0){
		b = foo(3.14);
		a = a + b;
	}
}