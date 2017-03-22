#include "Size.hpp";
#include <iostream>;
#include <string>;





static class WorldEnormity {

	void setDimension() {
		setTrueScale();
		setWorldSize();
	};


	void setScaling() {
		scaling = 8; //adjust to input with a baseline of 8.
	};

	void setTrueScale() {
		mapHeight = 1; //input from wherever replacing 1
		mapWidth = 1; //input from wherever replacing 1
	};


	void setWorldSize() {
		radius = 1;  //input from wherever replacing 1
		diameter = radius * 2;
		circumference = diameter*3.141592654; //see if you need more accuracy....
		area = 3.141592654 *radius *radius;
	};



	//void getDimension() {
	//	getTrueScale;// finish if needed

	//};

	//void getScaling() {}; //finish if needed

	//void callGetTrueScale() {
	//	getTrueScale(mapWidth, mapHeight);
	//};

	//void getTrueScale(unsigned int & mapWidth, unsigned int & mapHeight) {
	//};

	//void callGetWorldSize() {
	//	getWorldSize(radius, diameter, circumference, area);
	//}

	//void getWorldSize(unsigned int & radius, unsigned int & diameter, double circumference, long int area) {
	//};


private: char scaling=8;
	 unsigned int mapWidth, mapHeight, radius, diameter;
	 long int area;
	 double circumference;

	

};