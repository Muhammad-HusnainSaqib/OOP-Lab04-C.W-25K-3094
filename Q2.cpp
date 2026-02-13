#include <iostream>
using namespace std;



class satellites{
	public:
		const int ID;
		const string date;
		int radius;
		static int viewsReport;
		satellites(int x, string y, int r): ID(x), date(y) ,radius(r) {};
		
		void viewReport(){
			cout << "ID: " << ID << endl;
			cout << "DATE: " << date << endl;
			cout << "RADIUS: " << radius << endl;
			viewsReport++;
		}
		
		void calibrate(int c){
			radius = c;
		}
};

int satellites :: viewsReport = 0; 

int main(){
	satellites S1(2001,"20/1/2027",2000001);
	cout <<"Report viewed: " << satellites :: viewsReport << endl;
	S1.viewReport();
	cout <<"Report viewed: " << satellites :: viewsReport << endl;
	return 0;
}
