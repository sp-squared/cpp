#include <iostream>
#include <cstring>
using namespace std;

class C {
	public:
		C(const char *s = "null", int i = 0, double d = 1){
			strcpy(dataMember1,s);
			dataMember2 = i;
			dataMember3 = d;
		}	
		
		void memberFunction1(){
			cout << dataMember1 << " " << dataMember2 << " " << dataMember3 << endl;

		}
		
		void memberFunction2(int i, const  char *s = "unknown"){
			dataMember2 = i;
			cout << i << " received from " << s << endl;
		}
		
	private:
		char   dataMember1[20];
		int    dataMember2;
		double dataMember3;
};

int main(){
	C object1("object1", 100,2000);
	C object2("object2");
	C object3;

	object1.memberFunction1();
	object1.memberFunction2(123, "object1");
	
	object2.memberFunction1();
	object2.memberFunction2(123456, "object2");
	
	object3.memberFunction1();
	object3.memberFunction2(123456789, "object3");
	return 0;
	}	
