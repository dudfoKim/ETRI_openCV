#include "highgui.h"
 
int main(int argc, char **argv) 
{
        cvNamedWindow("Example2", CV_WINDOW_AUTOSIZE);
        CvCapture* capture=cvCreateFileCapture(argv[1]);
        IplImage* frame;
        char c;
 
        while(1)
	 {  //매 프레임마다 프레임을 받아오기위해 While문을 사용
               frame=cvQueryFrame(capture);
               if(!frame) break;
               cvShowImage("Example2", frame);
 
               c=cvWaitKey(33);
               if(c==27)      break;
        }
 
        cvReleaseCapture(&capture);
        cvDestroyWindow("Example2");
 
        return 0;
}
