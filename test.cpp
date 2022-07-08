#include <cstdio>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char **argv)
{
    if (argc != 2) {
        printf("usage: test IMAGE_FILE.\n");
        return -1;
    }

    Mat image;
    image = imread("/home/alonzo/1.png", 1);

    if (!image.data) {
        printf("No image data.\n");
        return -1;
    }

    namedWindow("Display Image", WINDOW_AUTOSIZE);
    imshow("Display Image", image);

    waitKey(0);

    return 0;
}
