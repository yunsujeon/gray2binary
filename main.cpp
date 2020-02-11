#define _CRT_SECURE_NO_WARNINGS

#include <opencv2/core.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <Windows.h>

using namespace std;
using namespace cv;

int main()
{
	Mat image, out2;
	char buf[256];
	int index = 0;

	while (index < 315){
			sprintf(buf, "C://Users//dbstn//Desktop//image%d.bmp", index);
			cout << buf << endl;

			image = imread(buf, IMREAD_GRAYSCALE);

			if (image.empty()){ //맞는 번호의 이미지가 없을 경우
				index++; //index++
			}

			else {
				threshold(image, out2, 1, 255, THRESH_BINARY); //검은색 아닌 부분을 모두 흰색으로 바꿈
				//imwrite(buf, out2); //out 을 buf의 위치와 이름 그대로 저장해준다.
				imwrite("C://usese", out2);
				index++; //index ++
			}
		}
	return 0;
}
