void func1(void) {
	return;
}

/*戻り値２５５*/
int func2(void) {
	return 255;
}

/*戻り値あいうえお*/
char *func3(void){
	return "あいうえお";
}

/*funcを呼び出し*/
int main(void) {
	func1();
	func2();
	func3();
}