#include <iostream>
#include"number.h"
#include <fstream>
using namespace std;

void TEST() {
	Number object1 = "139248121";
	Number object2 = "2321699872";
	const char *expectedsum1 = "2460947993";
	Number result1;
	result1= object1 + object2;
	cout << "Expected sum- " << expectedsum1 << endl;
	cout << "Result of sum- ";
	result1.get();
	cout << endl;
	const char* expectededuct1 = "2182451751";
	Number result2;
	result2= object2 - object1;
	cout << "Expected deduct- " << expectededuct1 << endl;
	cout << "Result of deduct- ";
	result2.get();
	cout << endl;
	const char *expectedmult1 = "139248121000000";
	object1 = object1 * 1000000;
	cout << "Expected multiply- " << expectedmult1 << endl;
	cout << "Result of myltiply- ";
	object1.get();
	cout << endl;
	const char *expectedmult2 = "232169987200";
	object2 = object2 * 100;
	cout << "Expected multiply- " << expectedmult2 << endl;
	cout << "Result of myltiply- ";
	object2.get();
	cout << endl;
	const char *expecteddivide1 = "139248121";
	object1 / 1000000;
	cout << "Expected multiply- " << expecteddivide1 << endl;
	cout << "Result of myltiply- ";
	object1.get();
	cout << endl;
	const char *expecteddivide2 = "2321699872";
	object2 = object2 /100;
	cout << "Expected multiply- " << expecteddivide2 << endl;
	cout << "Result of myltiply- ";
	object2.get();
	cout << endl;
	Number object4 = "129865587";
	const char *expecteddivide3 = "12986";
	object4 = object4 / 10000;
	cout << "Expected multiply- " << expecteddivide3 << endl;
	cout << "Result of myltiply- ";
	object4.get();
	cout << endl;
	Number object11 = "0";
	const char* expectedmyltiply11 = "0";
	object11 * 100;
	cout << "Expected multiply- " << expectedmyltiply11 << endl;
	cout << "Result of myltiply- ";
	object11.get();
	cout << endl;
	Number object22 = "123";
	const char *expecteddivide22 = "0";
	object22 / 10000;
	cout << "Expected multiply- " << expecteddivide22 << endl;
	cout << "Result of myltiply- ";
	object22.get();
	cout << endl;
	const char* expectedassignment = "139248121";
	object22 = object1;
	cout << "Expected assignment- " << expectedassignment << endl;
	cout << "Result of assignment- ";
	object22.get();
	cout << endl;
	const char* expectedassignment1 = "2321699872";
	object22 = object11=object2;
	cout << "Expected assignment- " << expectedassignment1 << endl;
	cout << "Result of assignment- ";
	object22.get();
	cout << endl;
	unsigned long expectedlong1 = 2321699872;
	unsigned long long1 = unsigned long(object2);
	cout << "Expected unsigned long- " << expectedlong1 << endl;
	cout << "Result of unsigned long- "<<long1<<endl<<endl;
	unsigned long expectedlong2 = 139248121;
	unsigned long long2 = unsigned long(object1);
	cout << "Expected unsigned long- " << expectedlong2 << endl;
	cout << "Result of unsigned long- " << long2 << endl;
	cout << endl;
	Number object6 = "4294967298";
	unsigned long expectedlong3 = 0;
	unsigned long long3 = unsigned long(object6);
	cout << "Expected unsigned long- " << expectedlong3 << endl;
	cout << "Result of unsigned long- " << long3 << endl;
}
void TEST1() {//тест к 3 лабораторной,пока не доведён до конца
	Number t = "29059815";
	Number y = "135";
	ifstream f("text.txt");
	ofstream f1("text.txt");
	if (!f1) cout << "Error";
	else
		f1 << t << y;
	f1.close();
	Number t1, y1;
	if (!f) cout << "Error";
	else f >> y1 >> t1;
	f.close();
	cout << y1 << t1;
	cout << y1.getlength();
}
int main() {
	TEST();
	cin.get();
	return 0;
}

