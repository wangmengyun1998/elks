/*
 * fourLakes.cpp
 *
 *  Created on: 2016年12月3日
 *      Author: asus
 */

#include <iostream>
using namespace std;

int main2() {
	int a[24][4] = { { 1, 2, 3, 4 }, { 1, 2, 4, 3 }, { 1, 3, 2, 4 }, { 1, 3, 4,
			2 }, { 1, 4, 2, 3 }, { 1, 4, 3, 2 }, { 2, 1, 3, 4 }, { 2, 1, 4, 3 },
			{ 2, 3, 1, 4 }, { 2, 3, 4, 1 }, { 2, 4, 1, 3 }, { 2, 4, 3, 1 }, { 3,
					1, 2, 4 }, { 3, 1, 4, 2 }, { 3, 2, 1, 4 }, { 3, 2, 4, 1 }, {
					3, 4, 1, 2 }, { 3, 4, 2, 1 }, { 4, 1, 2, 3 },
			{ 4, 1, 3, 2 }, { 4, 2, 1, 3 }, { 4, 2, 3, 1 }, { 4, 3, 1, 2 }, { 4,
					3, 2, 1 } };
	for (int i = 0; i < 24; i++) {
		int A = ((a[i][1] ==1) ) + (a[i][3] ==4 )
				+ (a[i][0] ==3 );
		int B = (a[i][3] ==1 ) + (a[i][1] ==4 )
				+ (a[i][0]==2)+ (a[i][2]==3);
		int C = (a[i][3] ==4 ) + (a[i][1] ==3 );
		int D = (a[i][0] ==1 ) + (a[i][2] ==4 )
				+ (a[i][3] ==2) +( a[i][1]==3 );
		//cout<<A<<B<<C<<D<<endl;
		if ((A == 1) && B == 1 && C == 1 && D == 1) {
			for (int j = 0; j < 4; j++) {
				cout << a[i][j] << endl;
			}
			break;
		}
	}
	return 0;
}

